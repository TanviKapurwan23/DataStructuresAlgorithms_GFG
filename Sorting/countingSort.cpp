#include <iostream>
#include <vector>
using namespace std;

// Function to perform Counting Sort
void countingSort(vector<int>& array) {
    // Find the maximum and minimum values in the array
    int maxVal = *max_element(array.begin(), array.end());
    int minVal = *min_element(array.begin(), array.end());

    int range = maxVal - minVal + 1;

    // Create a count array to store the frequency of each element
    vector<int> count(range, 0);

    // Store the count of each element
    for (int num : array) {
        count[num - minVal]++;
    }

    // Overwrite the original array with sorted elements
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            array[index++] = i + minVal;
            count[i]--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> array(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    countingSort(array);

    cout << "Sorted array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
