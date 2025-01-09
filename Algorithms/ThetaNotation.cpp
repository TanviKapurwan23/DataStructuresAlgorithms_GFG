// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find whether a key exists in an 
// array or not using linear search
bool linearSearch(int a[], int n, int key)
{
    // Traverse the given array, a[]
    for (int i = 0; i < n; i++) {

        // Check if a[i] is equal to key
        if (a[i] == key)
            return true;
    }

    return false;
}

// Driver Code
int main()
{
    // Given Input
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
  
    if (linearSearch(arr, n, x))
        cout << "Element is present in array";
    else
        cout << "Element is not present in array";

    return 0;
}
