#include <iostream>
using namespace std;

// Function 'test' takes three integers (x, y, z) and a boolean flag as parameters
bool test(int x, int y, int z, bool flag)
{
    // Returns based on the value of the flag:
    // If flag is true, checks if x is less than or equal to y and y is less than or equal to z
    // If flag is false, checks if x is less than y and y is less than z
    return flag ? x <= y && y <= z : x < y && y < z;
}

int main() 
{
    // Testing the 'test' function with different sets of numbers and flags
    cout << test(1, 2, 3, false) << endl;    // Output: 1 (True, as 1 < 2 < 3)
    cout << test(1, 2, 3, true) << endl;     // Output: 1 (True, as 1 <= 2 <= 3)
    cout << test(10, 2, 30, false) << endl;  // Output: 0 (False, as 10 is not less than 2)
    cout << test(10, 10, 30, true) << endl;  // Output: 1 (True, as 10 <= 10 <= 30)

    return 0;      
}
