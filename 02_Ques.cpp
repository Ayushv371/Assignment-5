// Given a natural number, find the number of 0’s in the binary 
// representation of that number.
// Note: Don’t count the preceding zeros.
// For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.

#include <iostream>
using namespace std;

int main() {
int num;

cout << "Enter a natural number: ";
cin >> num;

if (num < 0) {
    cout << "Please enter a non-negative natural number." << endl;
    return 1;
}

int count = 0;
bool countingStarted = false;

for (int i = 31; i >= 0; i--) {
    int bit = (num >> i) & 1;

    if (bit == 1) {
        countingStarted = true;
    }

    if (countingStarted && bit == 0) {
        count++;
    }
}

cout << "Number of 0's: " << count << endl;

return 0;
}