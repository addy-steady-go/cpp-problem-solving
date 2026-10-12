#include <iostream> 
#include <string>   
using namespace std;

// Function to change characters in a string to the next character in the ASCII sequence
string change_letter(string str) {

	int char_code; // Variable to store ASCII value of characters

	// Loop through each character in the string
	for (int x = 0; x < str.length(); x++)
	{
		char_code = int(str[x]); // Get ASCII value of the character

		// Check if the character is 'z', then change it to 'a'
		if (char_code == 122)
		{
			str[x] = char(97);
		}
		// Check if the character is 'Z', then change it to 'A'
		else if (char_code == 90)
		{
			str[x] = char(65);
		}
		// Check if the character is an uppercase or lowercase letter
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
		{
			str[x] = char(char_code + 1); // Change to the next character in the ASCII sequence
		}

	}

	return str; // Return the modified string
}

int main()
{
	cout << "Original string: addydaddy"; // Displaying the original string
	cout << "\nNew string: " << change_letter("addydaddy"); // Displaying the modified string

	cout << "\n\nOriginal string: Python2"; // Displaying the original string
	cout << "\nNew string: " << change_letter("Python2"); // Displaying the modified string

	return 0;
}

