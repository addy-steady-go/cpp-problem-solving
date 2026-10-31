#include <iostream>
using namespace std;

// Function to find the maximum value among three integers
int test(int x, int y, int z)
{
    // Calculate the maximum value among x, y, and z using the max function from the standard library
    int result = max(x, max(y, z));
    return result; // Return the maximum value
}

// Main function
int main() 
{
    cout << test(1,2,3) << endl;   // Output the result of test function with values 1, 2, and 3
    cout << test(1,3,2) << endl;   // Output the result of test function with values 1, 3, and 2
    cout << test(1,1,1) << endl;   // Output the result of test function with values 1, 1, and 1
    cout << test(1,2,2) << endl;   // Output the result of test function with values 1, 2, and 2
    return 0;   
}

