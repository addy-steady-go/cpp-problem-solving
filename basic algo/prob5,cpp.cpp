#include <bits/stdc++.h> 
using namespace std;

// Function to calculate the sum of divisors of a number 'n'
int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) // Loop to find divisors up to square root of 'n'
    {
        if (n % i == 0) // Check if 'i' is a divisor of 'n'
        {
            if (n / i == i) // If 'i' is a square root divisor of 'n', add 'i' to sum
                sum = sum + i;
            else // Otherwise, add both 'i' and 'n/i' to sum
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n; // Subtract 'n' to get the sum of proper divisors
    return sum; // Return the sum of divisors
}

// Function to check if a number is deficient or not
bool checkDeficient(int n)
{
    return (getSum(n) < n); // Return true if the sum of divisors is less than 'n'
}

int main()
{
    int n;
    cout << "\n\n Check whether a given number is a Deficient number:\n";
    cout << " --------------------------------------------------------\n";
    cout << " Input an integer number: ";
    cin >> n; // Input the number

    // Check if the number is deficient and display the result
    checkDeficient(n) ? cout << " The number is Deficient.\n" : cout << " The number is not Deficient.\n";
    return 0; 
}

