#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

struct myStack {
    Node* head;
    int currentSize; // Renamed to avoid conflict with size() method.

    myStack() {
        head = nullptr;
        currentSize = 0;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        currentSize++;
    }

    int pop() {
        if (head == nullptr) {
            return INT_MAX; // Stack underflow.
        }
        int res = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        currentSize--;
        return res;
    }

    int size() {
        return currentSize;
    }

    bool isEmpty() {
        return (head == nullptr);
    }

    int peek() {
        if (head == nullptr) {
            return INT_MAX; // Stack underflow.
        }
        return head->data;
    }
};

int main() {
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Peek: " << s.peek() << endl;
    cout << "Size: " << s.size() << endl;

    cout << "Pop: " << s.pop() << endl;
    cout << "Peek after pop: " << s.peek() << endl;

    cout << "Is Empty: " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}


// O(1)


