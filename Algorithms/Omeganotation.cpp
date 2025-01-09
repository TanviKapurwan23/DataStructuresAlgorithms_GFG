// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print all possible pairs
int print(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j)
                cout << a[i] << " " << a[j] << "\n";
        }
    }
}

// Driver Code
int main()
{

    // Given array
    int a[] = { 1, 2, 3 };

    // Store the size of the array
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    print(a, n);

    return 0;
}
