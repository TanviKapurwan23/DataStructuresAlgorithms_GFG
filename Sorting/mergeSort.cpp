#include <iostream>
using namespace std;

// Merge two subarrays of array[]
void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    // Create temporary arrays
    int leftArray[n1], rightArray[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = array[mid + 1 + j];

    // Merge the temporary arrays back into array[left..right]
    int i = 0;  // Initial index of the left subarray
    int j = 0;  // Initial index of the right subarray
    int k = left; // Initial index of the merged array

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArray[], if any
    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArray[], if any
    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

// Recursive function for merge sort
void mergeSort(int array[], int left, int right) {
    if (left < right) {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Recursively sort the two halves
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Merge the sorted halves
        merge(array, left, mid, right);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    mergeSort(array, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
