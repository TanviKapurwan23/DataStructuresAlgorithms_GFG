#include <iostream>
using namespace std;

class TwoStacks {
private:
    int* arr;       // Array to store elements
    int size;       // Maximum size of the array
    int top1;       // Top pointer for Stack 1
    int top2;       // Top pointer for Stack 2

public:
    // Constructor
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;         // Stack 1 starts from the beginning
        top2 = size;       // Stack 2 starts from the end
    }

    // Push operation for Stack 1
    void push1(int data) {
        if (top1 < top2 - 1) { // Check if there's space
            top1++;
            arr[top1] = data;
        } else {
            cout << "Stack Overflow for Stack 1\n";
        }
    }

    // Push operation for Stack 2
    void push2(int data) {
        if (top1 < top2 - 1) { // Check if there's space
            top2--;
            arr[top2] = data;
        } else {
            cout << "Stack Overflow for Stack 2\n";
        }
    }

    // Pop operation for Stack 1
    int pop1() {
        if (top1 >= 0) {
            int popped = arr[top1];
            top1--;
            return popped;
        } else {
            cout << "Stack Underflow for Stack 1\n";
            return -1;
        }
    }

    // Pop operation for Stack 2
    int pop2() {
        if (top2 < size) {
            int popped = arr[top2];
            top2++;
            return popped;
        } else {
            cout << "Stack Underflow for Stack 2\n";
            return -1;
        }
    }

    // Destructor to free allocated memory
    ~TwoStacks() {
        delete[] arr;
    }
};

// Example usage
int main() {
    TwoStacks ts(10); // Create two stacks of size 10

    ts.push1(1);
    ts.push1(2);
    ts.push1(3);

    ts.push2(9);
    ts.push2(8);
    ts.push2(7);

    cout << "Popped from Stack 1: " << ts.pop1() << endl; // Output: 3
    cout << "Popped from Stack 2: " << ts.pop2() << endl; // Output: 7

    ts.push1(4);
    ts.push2(6);

    cout << "Popped from Stack 1: " << ts.pop1() << endl; // Output: 4
    cout << "Popped from Stack 2: " << ts.pop2() << endl; // Output: 6

    return 0;
}
