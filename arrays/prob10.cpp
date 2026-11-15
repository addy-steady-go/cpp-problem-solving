#include<iostream>
#include<set> 
using namespace std; 

// Function to find the first repeating element in an array
int first_repeating_element(int array1[], int s1)
{
    int min_val = -1; // Initialize the minimum value as -1

    set<int> result; // Create a set to store unique elements

    // Traverse the array in reverse order
    for (int i = s1 - 1; i >= 0; i--)
    {
        // If the element is already present in the set, update min_val
        if (result.find(array1[i]) != result.end())
            min_val = i;
        else   
            result.insert(array1[i]); // Insert the element into the set
    }

    // Return the first repeating element found
    if (min_val != -1)
        return array1[min_val];
    else
        return 0;
}


int main()
{
    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9}; // Declaration and initialization of the array
    int fre; // Variable to store the first repeating element

    int s1 = sizeof(array1) / sizeof(array1[0]); // Calculate the size of the array

    cout << "Original array: "; // Output label for the original array

    // Output each element of the original array
    for (int i = 0; i < s1; i++) 
        cout << array1[i] << " ";

    fre = first_repeating_element(array1, s1); // Call the function to find the first repeating element
    cout << "\nFirst repeating element: " << fre; // Output the first repeating element
    return 0; 
}

