#include <iostream>
using namespace std;

// Function to modify a string by appending its last character at both ends
string test(string str)
{
    // Extract the last character of the string
    string s = str.substr(str.length() - 1);

    // Append the last character both at the beginning and end of the string
    return s + str + s;
}

// Main function
int main() 
{
    cout << test("Red") << endl;    // Output the result of test function with string "Red"
    cout << test("Green") << endl;  // Output the result of test function with string "Green"
    cout << test("1") << endl;      // Output the result of test function with string "1"
    return 0;  
}

