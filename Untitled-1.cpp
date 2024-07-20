#include<iostream> 
#include<climits> 
using namespace std; 

// Function definition to find the second largest element in the array
void second_largest(int nums[], int arr_size) 
{
    int i, first_element, second_element; 
    
    /* There should be atleast two elements */
    if (arr_size < 2) 
    {
        cout << " Invalid Input "; // Output message for invalid input
        return; 
}

    first_element = second_element = INT_MIN; 
    for (i = 0; i < arr_size; i ++) 
    {
        if (nums[i] > first_element) // Checking if current element is larger than the first largest element
        {
            second_element = first_element; 
            first_element = nums[i]; 
        }
        else if (nums[i] > second_element && nums[i] != first_element) // Checking if current element is larger than the second largest element and not equal to first largest element
        {
            second_element = nums[i]; 
        }
    }

    if (second_element == INT_MIN) // Checking if second largest element is still initialized as minimum integer value
    {
        cout << "No second largest element"; 
    }
    else
    {
        cout << "\nThe second largest element is: " << second_element; 
        // Output the second largest element
    }
}

int main() // Main function where the program execution starts
{
    int nums[] = {12, 35, 1, 10, 34, 1}; 
    int n = sizeof(nums)/sizeof(nums[0]); \

    cout << "Original array: "; 
    for (int i=0; i < n; i++) 
        cout << nums[i] <<" "; 
    second_largest(nums, n); 
    return 0; 
}
