#include <iostream>
using namespace std;

// Function to reverse an integer
int reverse_int(int x) {
    int res = 0; // Initialize the result variable to store the reversed integer

    // Loop to reverse the integer
    while (x != 0) {
        int pop = x % 10; // Extract the last digit of the number
        x = x / 10; // Update the number by removing its last digit

        int candidate = res * 10 + pop; // Form the reversed number

        // Check for overflow by comparing the reversed number with its expected value after multiplication
        if (candidate / 10 != res) {
            return 0; // Return 0 if overflow occurs
        }

        res = candidate; // Update the result with the reversed number
    }

    return res; // Return the reversed integer
}

int main() {
    // Test cases to reverse integers and display the results
    cout << "Reverse of 4 is " << reverse_int(4) << endl;
    cout << "Reverse of 123 is " << reverse_int(123) << endl;
    cout << "Reverse of 208478933 is " << reverse_int(208478933) << endl;
    cout << "Reverse of -73634 is " << reverse_int(-73634) << endl;

    return 0; 
}

