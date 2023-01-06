#include <iostream>
using namespace std;
   
// Function to check the array for elements in
// given range
bool check_elements(int arr[], int n, int A, int B)
{
    // Range is the no. of elements that are
    // to be checked
    int range = B - A;
   
    // Traversing the array
    for (int i = 0; i < n; i++) {
   
        // If an element is in range
        if (abs(arr[i]) >= A && abs(arr[i]) <= B) {
   
            // Negating at index ‘element – A’
            int z = abs(arr[i]) - A;
            if (arr[z] > 0) {
                arr[z] = arr[z] * -1;
            }
        }
    }
   
    // Checking whether elements in range 0-range
    // are negative
    int count=0;
    for (int i = 0; i <= range && i<n; i++) {
   
        // Element from range is missing from array
        if (arr[i] > 0)
            return false;
        else
            count++;
    }
     if(count!= (range+1))
        return false;
    // All range elements are present
    return true;
}

int arr[] = {1, 4, 5, 2, 7, 8, 3};

// index 2 = 5
// index 5 = 8
// 1