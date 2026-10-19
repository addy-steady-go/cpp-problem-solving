#include <iostream> 
#include <cmath> 
using namespace std; 

// Function to check if a number is a power of two
string Powers_of_Two(int n) {
	// Loop through integers from 0 to maximum integer value
	for (int x = 0; x < INT_MAX; x++)
	{
		// Check if 2 raised to the power of 'x' is equal to 'n'
		if (pow(2, x) == n)
		{
			return "True"; // Return "True" if 'n' is a power of 2
		}
		// If 2 raised to the power of 'x' exceeds 'n', break the loop
		else if (pow(2, x) > n)
		{
			break;
		}
	}
	return "False"; // Return "False" if 'n' is not a power of 2
}

int main() {
	// Test cases
	cout << "Is 8 a power of 2: " << Powers_of_Two(8) << endl;
	cout << "Is 256 a power of 2: " << Powers_of_Two(256) << endl;
	cout << "Is 124 a power of 2: " << Powers_of_Two(124) << endl;
	return 0; // Return 0 to indicate successful completion
}

