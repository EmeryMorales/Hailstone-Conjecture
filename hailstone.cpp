 // Name: Emery Morales
// 06 February 2019
// Class: Computer Science 142-01
// Project 1: Hailstone Conjecture - Part 1: Hailstone Sequences
// Pledge: I have neither given nor received unauthorized aid on this program.
// Description: Based on the 1937 Hailstone Conjecture. Simple Algorithm depending if number is even or odd.

#include <iostream>
using namespace std;

int main() {
  int num;
  // Prompts user to start with any number.
  cout << "Enter a number: ";
  cin >> num;

  int len;
  len = 0; // Ctr created.

  // Loop stops when it hits the number 1.
  while (num > 1) {
    if (num % 2 == 0) { // If even number, divide it by two.
      num = num / 2;
      cout << num << " ";
      len += 1;
    }
    else { // If odd number, multiply it by three then add one.
      num = (num * 3) + 1;
      cout << num << " ";
      len += 1;
    }
  }

  // Outputs number of steps it took to hit number 1.
  cout << endl;
  cout << "Length: " << len << endl;

  return 0;
}
