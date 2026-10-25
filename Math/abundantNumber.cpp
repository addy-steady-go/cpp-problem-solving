#include <bits/stdc++.h> // Include necessary libraries

using namespace std;

// Function to get the sum of divisors of a number 'n'
int getSum(int n)
{
    int sum = 0; // Initialize sum variable to store the sum of divisors

    // Loop through numbers from 1 to square root of 'n'
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0) // Check if 'i' is a divisor of 'n'
        {
            if (n / i == i) // If divisor is same, add only 'i' to the sum
                sum = sum + i;
            else // Otherwise, add both divisors
            {
                sum = sum + i; // Add divisor 'i'
                sum = sum + (n / i); // Add the other divisor ('n' divided by 'i')
            }
        }
    }
    sum = sum - n; // Subtract 'n' as it's not considered as a proper divisor
    return sum; // Return the sum of divisors
}

// Function to check if a number is Abundant or not
bool checkAbundant(int n)
{
    return (getSum(n) > n); // Return true if the sum of divisors is greater than 'n'
}

int main()
{
    int n;
    cout << "\n\n Check whether a given number is an Abundant number:\n"; // Display a message for the user
    cout << " --------------------------------------------------------\n";
    cout << " Input an integer number: "; // Prompt user to input an integer
    cin >> n; // Read user input into variable 'n'

    // Check if the number is Abundant and display the result accordingly
    checkAbundant(n) ? cout << " The number is Abundant.\n" : cout << " The number is not Abundant.\n";

    return 0; 
}

