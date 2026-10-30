# include <iostream> 
# include <string>

using namespace std;

int main()
{
    int i = 1, u = 1, sum = 0, n; // Initialize variables i, u, sum, and n
    cout << "\n\n Check whether a given number is a Perfect number:\n"; // Display message for user
    cout << "------------------------------------------------------\n";

    cout << "Input a number: "; // Ask user for input
    cin >> n; // Get user input and store it in variable n

    while (u <= n) // Loop through numbers from 1 to n
    {
        if (u < n) // Check if u is less than n
        {
            if (n % u == 0) // Check if u is a divisor of n
                sum = sum + u; // Add u to the sum if it's a divisor of n
        }
        u++; // Increment u by 1 in each iteration
    }

    if (sum == n) // Check if the sum of divisors is equal to the number itself
    {
        cout << n << " is a Perfect number." << "\n"; // If the sum is equal to the number, it's a Perfect number
    }
    else
    {
        cout << n << " is not a Perfect number." << "\n"; // If the sum is not equal to the number, it's not a Perfect number
    }
}

