#include <iostream>

using namespace std;

// Add If to a string
 
string test(string s)
{
    // Check if the string length is greater than 2 and if the substring from index 0 to 1 (first two characters) is "if"
    if (s.length() > 2 && s.substr(0, 2) == "if")
    {
        return s; // Return the string as it is if it starts with "if" and has a length greater than 2
	}
    	return "if " + s; // Prepend "if " to the string if it doesn't start with "if" or has a length less than or equal to 2
}

int main() {
    cout << test("if else") << endl;  // Output the result of test function with argument "if else"
    cout << test("else") << endl;    // Output the result of test function with argument "else"
    return 0;   
}

