#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int sid1; // Declaring an integer variable sid1 to store the side length of the cube
    float volcu; // Declaring a floating-point variable volcu to store the volume of the cube
    cout << "\n\n Calculate the volume of a cube :\n"; // Outputting a message indicating the calculation of cube volume
    cout << "---------------------------------------\n"; // Outputting a separator line

    cout << " Input the side of a cube : "; // Prompting the user to input the side length of the cube
    cin >> sid1; // Taking input for the side length from the user

    // Calculating the volume of the cube using the formula: side * side * side
    volcu = (sid1 * sid1 * sid1);

    cout << " The volume of a cube is : "<< volcu << endl; // Displaying the calculated volume of the cube
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function

