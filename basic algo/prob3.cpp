#include <iostream>
using namespace std;

// Function to check if an array contains a sequence of 1, 2, 3
bool test(int nums[], int arr_length)
{
    // Loop through the array elements (except the last two elements) to find the sequence 1, 2, 3
    for (int i = 0; i < arr_length - 2; i++)
    {
        // Check if the current, next, and next-next elements form the sequence 1, 2, 3
        if (nums[i] == 1 && nums[i + 1] == 2 && nums[i + 2] == 3)
            return true; // Return true if the sequence is found
    }
    return false; // Return false if the sequence is not found
}

int main() 
{
    int arr_length; // Variable to store the length of the array

    // Test cases with different arrays
    int nums1[] = {1, 1, 2, 3, 1};    // Array 1
    arr_length = sizeof(nums1) / sizeof(nums1[0]); // Calculate the length of array 1
    cout << test(nums1, arr_length) << endl; // Check if array 1 contains the sequence 1, 2, 3

    int nums2[] = {1, 1, 2, 4, 1};    // Array 2
    arr_length = sizeof(nums2) / sizeof(nums2[0]); // Calculate the length of array 2
    cout << test(nums2, arr_length) << endl; // Check if array 2 contains the sequence 1, 2, 3

    int nums3[] = {1, 1, 2, 1, 2, 3}; // Array 3
    arr_length = sizeof(nums3) / sizeof(nums3[0]); // Calculate the length of array 3
    cout << test(nums3, arr_length) << endl; // Check if array 3 contains the sequence 1, 2, 3

    return 0; 
}

