#include <iostream>
#include <cstring>
#include <cmath>
#include "sieve.h"
using namespace std;

void Sieve::sieve(int lower, int upper){
    // Sets the upper bound sqare root
    int ubsqrt = (int)sqrt( (double) upper);

    //Create a boolean array "prime[0..n]"
    bool *prime = new bool[upper + 1];

    //Initialize all entries it as true. Done using the memset fucntion
    //Avoids the use of a for loop to set all the values in the array to true.
    memset(prime, true, sizeof(bool) * (upper + 1));

    //For loop runs from n to the the sqrt of upper
    for (int p = 2; p <= ubsqrt; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true){
            // Update all multiples of p greater than or equal to the square of it
            // numbers which are multiple of p and are less than p^2 are already been marked.
            for (int i = p * p; i <= upper; i += p){
              //prime[i] will be false if i is not prime.
              prime[i] = false;
            }
        }
    }

    // Print all prime numbers uisng a for loop
    for (int p = lower; p <= upper; p++){
      if (prime[p] == true){
        cout << p << endl;
      }
    }

    // Delete the prime array
    delete [] prime;
}
