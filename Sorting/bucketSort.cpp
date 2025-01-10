#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform bucket sort
void bucketSort(int arr[], int n, int k) {
    // Find the maximum value in the array
    int max_value = arr[0];
    for (int i = 1; i < n; i++) {
        max_value = max(max_value, arr[i]);
    }

    // Create k empty buckets
    vector<int> bkt[k];

    // Distribute the elements of the array into the buckets
    for (int i = 0; i < n; i++) {
        int bi = (k * arr[i]) / (max_value + 1);  // Determine bucket index
        bkt[bi].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i < k; i++) {
        sort(bkt[i].begin(), bkt[i].end());
    }

    // Collect the elements from the buckets back into the array
    int index = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < bkt[i].size(); j++) {
            arr[index++] = bkt[i][j];
        }
    }
}

// Helper function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {30, 40, 10, 80, 5, 12, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5; // Number of buckets

    cout << "Original array: ";
    printArray(arr, n);

    // Call bucket sort
    bucketSort(arr, n, k);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
