#include <iostream> 
using namespace std; 

// Function to swap two integer values using pointers
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to sort an array containing 0s, 1s, and 2s in ascending order
void sort_012_num(int nums[], int n)
{
    int i = 0; // Pointer for 0s (left boundary)
    int j = n - 1; // Pointer for 2s (right boundary)
    int mid_num = 0; // Pointer for traversing the array

    // Loop to arrange the elements
    while (mid_num <= j)
    {
        switch (nums[mid_num])
        {
        case 0:
            swap(&nums[i++], &nums[mid_num++]); // If the current element is 0, swap it with the left boundary element (0)
            break;
        case 1:
            mid_num++; // If the current element is 1, move to the next element (no swap needed)
            break;
        case 2:
            swap(&nums[mid_num], &nums[j--]); // If the current element is 2, swap it with the right boundary element (2)
            break;
        }
    }
}

// Main function
int main()
{
    int nums[] = {0, 1, 2, 2, 1, 1, 0, 0, 1}; // Declaration and initialization of an integer array
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate the number of elements in the array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " "; // Output each element of the original array
    sort_012_num(nums, n); // Sort the array containing 0s, 1s, and 2s
    cout << "\nArray elements after rearranging: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " "; // Output each element of the modified array
    return 0;
}

