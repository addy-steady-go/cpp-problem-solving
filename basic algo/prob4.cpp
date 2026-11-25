#include <iostream>
using namespace std;

// Function to count occurrences where the array contains either (5, 5) or (5, 6) pairs
int test(int numbers[], int arr_length)
{
    int ctr = 0;

    // Loop through the array
    for (int i = 0; i < arr_length; i++)
    {
        // Check for pairs (5, 5) or (5, 6)
        if ((numbers[i] == 5 && numbers[i + 1] == 5) || (numbers[i] == 5 && numbers[i + 1] == 6))
        {
            ctr++; // Increment counter when a valid pair is found
        }
    }
    return ctr; 
}

int main() 
{
    int arr_length;	

    // Test cases with different integer arrays
    int nums1[] = {5, 5, 2};	
    arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl; 

    int nums2[] = {5, 5, 2, 5, 5};	
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl; 

    int nums3[] = {5, 6, 2, 9};	
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;

    return 0; 
}

