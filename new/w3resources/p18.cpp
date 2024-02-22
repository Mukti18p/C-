#include <iostream>
using namespace std;

// Function to determine if a number is divisible by 3 or 7 exclusively (but not both)
bool test(int n)
{
    // Returns true if n is divisible by 3 exclusively XOR (n is divisible by 7 exclusively)
    return n % 3 == 0 ^ n % 7 == 0;
}

int main() 
{
    // Testing the test function with different input values
    cout << test(3) << endl;  // Output: 1 (true), divisible by 3 exclusively
    cout << test(7) << endl;  // Output: 1 (true), divisible by 7 exclusively
    cout << test(21) << endl; // Output: 0 (false), divisible by both 3 and 7

    return 0; // Return 0 to indicate successful completion
}