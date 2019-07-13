// Name: Emery Morales
// 06 February 2019
// Class: Computer Science 142-01
// Project 1: Hailstone Conjecture - Part 2: Searching Hailstones
// Pledge: I have neither given nor received unauthorized aid on this program.
// Description: Program that searches through a range of numbers that the user specifies and reports the shortest and longest lengths in that range.

#include <iostream>
#include <climits>
using namespace std;

int main() {
  // Placeholder values.
  int minLen = INT_MAX;
  int maxLen = -1;

  // Prompts user for range.
  int lowerBound;
  int upperBound;
  cout << "Enter range you want to search: " << endl;
  cin >> lowerBound >> upperBound;

  // Prints error message if start of range is bigger than the finish or if it is a negative number.
  if (lowerBound > upperBound || lowerBound <= 0) {
    cout << "Invalid Range" << endl;
    return 0;
  }

  int i, min_i, max_i;

  // For loop uses range specified by user.
  for (i = lowerBound; i <= upperBound; ++i) { // Range is inclusive
    // Ctr len created to store number of times it takes to reach number 1.
    int len;
    len = 0;

    int num = i;

    // Loop stops when it hits the number 1.
    while (num > 1) {
      // If even number, divide it by two.
      if (num % 2 == 0) {
        num = num / 2;
        len += 1;
      }
      // If odd number, multiply it by three then add one.
      else {
        num = (num * 3) + 1;
        len += 1;
      }
    }
    // Stores longest length at the specified range.
    if (len > maxLen) {
      maxLen = len;
      max_i = i;
    }
    // Stores shortest length at the specified range.
    if (len < minLen) {
      minLen = len;
      min_i = i;
    }
  }

  // Reports longest lenth and shortest length at the specified range.
  cout << "Minimum Length: " << minLen << endl;
  cout << "Achieved by: " << min_i << endl;
  cout << "Maximum Length: " << maxLen << endl;
  cout << "Achieved by: " << max_i << endl;

  return 0;
}
