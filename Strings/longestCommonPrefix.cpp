#include <iostream> 
#include<algorithm> 
using namespace std; 

// Function to find the longest common prefix among an array of strings
string longest_Common_Prefix(string arr_strings[], int arr_size)
{
    // If array size is 0, return empty string
    int size = arr_size;
    string str = arr_strings[0]; // Initialize the reference string with the first string in the array
    if(size == 1)
        return str; // Return the first string if there's only one string in the array
    string result = ""; // Initialize the result string to store the common prefix
    int j = 1; // Counter variable for the next string in the array
    for(int i=0; i<size; i++){ // Loop through each character of the first string
        while(j < size){ // Loop through other strings in the array
            if(str[i] == arr_strings[j][i]){ // Check if characters match at the same position in the strings
                j++; // Move to the next string
            }
            else{
                return result; // Return the current common prefix if characters do not match
            }
        }
        result += str[i]; // Append the character to the result as it is present in all strings
        j = 1; // Reset the counter for the next character
    }
    return result; // Return the longest common prefix
}

int main()
{
    // Array of strings for testing
    string arr_strings[] = {"Padas", "Packed", "Pace", "Pacha"};
    int arr_size = sizeof(arr_strings) / sizeof(arr_strings[0]); // Calculate array size
    // Print the longest common prefix among the strings in the array
    cout << "The longest common prefix is: "
<< longest_Common_Prefix(arr_strings, arr_size);

    // More test cases with different arrays of strings
    string arr_strings1[] = {"Jacket", "Joint", "Junky", "Jet"};
    arr_size = sizeof(arr_strings1) / sizeof(arr_strings1[0]);
    cout << "\nThe longest common prefix is: "
<< longest_Common_Prefix(arr_strings1, arr_size);

    string arr_strings2[] = {"Bort", "Whang", "Yarder", "Zoonic"};
    arr_size = sizeof(arr_strings2) / sizeof(arr_strings2[0]);
    cout << "\nThe longest common prefix is: "
<< longest_Common_Prefix(arr_strings2, arr_size);         

    return 0;
}

