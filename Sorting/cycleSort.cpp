#include <iostream>
using namespace std;

void cycleSort(int arr[], int n) {
    for (int cs = 0; cs < n - 1; cs++) {
        int item = arr[cs];
        int pos = cs;

        // Find position where we put the element
        for (int i = cs + 1; i < n; i++) {
            if (arr[i] < item) {
                pos++;
            }
        }

        // If the element is already in the correct position, continue
        if (pos == cs) {
            continue;
        }

        // Otherwise, put the element to the correct position
        while (item == arr[pos]) {
            pos++;
        }
        swap(arr[pos], item);

        // Rotate the rest of the cycle
        while (pos != cs) {
            pos = cs;
            for (int i = cs + 1; i < n; i++) {
                if (arr[i] < item) {
                    pos++;
                }
            }

            while (item == arr[pos]) {
                pos++;
            }
            swap(arr[pos], item);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cycleSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
