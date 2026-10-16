#include<iostream>
#include <stack> 
using namespace std; 

void next_greater(int nums[], int n)
{
    stack<int> data_stack; // Declaring a stack to store elements

    data_stack.push(nums[0]); // Pushing the first element of the array onto the stack

    // Loop to find the next greater elements
    for (int i = 1; i < n; i++)
    {
        int next_element = nums[i]; // Storing the current element to be compared

        // Checking if the stack is not empty
        if (data_stack.empty() == false)
        {
            int array_element = data_stack.top(); // Fetching the top element of the stack
            data_stack.pop(); // Popping the top element from the stack

            // Loop to find and print the next greater elements
            while (array_element < next_element)
            {
                cout << array_element << ": " << next_element << endl; // Outputting the pair of elements

                // Checking if the stack is empty
                if (data_stack.empty() == true)
                    break;

                array_element = data_stack.top(); // Fetching the top element of the stack
                data_stack.pop(); // Popping the top element from the stack
            }

            // Checking if the current array element is greater than the next element
            if (array_element > next_element)
                data_stack.push(array_element); // Pushing the array element back onto the stack
        }

        data_stack.push(next_element); // Pushing the next element onto the stack
    }
}

int main()
{
    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7}; // Declaration and initialization of an integer array
    int n = sizeof(nums) / sizeof(nums[0]); // Calculating the number of elements in the array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " "; // Outputting each element of the array
    cout << "\nNext Greater Element:\n"; // Output message indicating the display of the next greater elements
    next_greater(nums, n); // Calling the function to find the next greater elements
}

