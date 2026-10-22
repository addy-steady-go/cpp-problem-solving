#include <iostream>

using namespace std; 

int main() 
{
    int num1, num2, r, sum = 0;

    // Display a message to find the sum of digits of a given number
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";

    // Prompt the user to input a number
    cout << " Input a number: ";
    cin >> num1; // Reading the number entered by the user

    num2 = num1; // Store the original number in 'num2' for displaying later

    // Loop to extract each digit and calculate their sum
    while (num1 > 0) 
    {
        r = num1 % 10; // Extract the rightmost digit of 'num1'
        num1 = num1 / 10; // Remove the rightmost digit from 'num1'
        sum = sum + r; // Add the extracted digit to the 'sum' variable
    }

    // Display the sum of digits of the original number 'num2'
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;

    return 0; 
}

