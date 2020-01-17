#include <iostream>
#include <cstring>
#include <cmath>
#include "sieve.h"
using namespace std;

// Driver Program
int main(){
  // Intialize the varibale for the user input
  int lower, upper;

  // Create object using class
  Sieve test;

  // Ask user for the lower bound
  cout << "Enter the Lower Bound: " << endl;

  // Take the user input and store in lower.
  cin >> lower;

  // Ask user for the upper bound
  cout << "Enter the Upper Bound: " << endl;

  // Take the user input and store in upper
  cin >> upper;

  cout << "The prime numbers between " << lower << " and "
       << upper << " are:" << endl;

  //Run the Algorthim from the sieve.cpp file
  test.sieve(lower, upper);

  return 0;
}
