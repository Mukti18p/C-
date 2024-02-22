#include <iostream>
using namespace std;

// Function to check if a number's last digit is less than or equal to 2 OR greater than or equal to 8
bool test(int n)
{
    // Returns true if the last digit of n is less than or equal to 2 OR greater than or equal to 8
    return n % 10 <= 2 || n % 10 >= 8;
}

int main() 
{
    // Testing the test function with different input values
    cout << test(3) << endl;
    cout << test(7) << endl;
    cout << test(8) << endl;
    cout << test(21) << endl;

    return 0; // Return 0 to indicate successful completion
}