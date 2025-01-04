// Naive 
void printSpan(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int span = 1;
        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--) {
            span++;
        }
        std::cout << span << " ";
    }
}

// efficient

#include <iostream>
#include <stack>

void printSpan(int arr[], int n) {
    std::stack<int> s; // Stack to store indices of array elements
    s.push(0);         // Push the index of the first element
    std::cout << 1 << " "; // Span for the first element is always 1

    for (int i = 1; i < n; i++) {
        // Remove elements from the stack that are less than or equal to the current element
        while (!s.empty() && arr[s.top()] <= arr[i]) {
            s.pop();
        }

        // Calculate the span
        int span = s.empty() ? (i + 1) : (i - s.top());
        std::cout << span << " ";

        // Push the current index onto the stack
        s.push(i);
    }
}
