#include <iostream>
#include <queue>

class Stack {
private:
    std::queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        std::swap(q1, q2);
    }

    void pop() {
        if (q1.empty()) {
            std::cout << "Stack is empty\n";
            return;
        }
        q1.pop();
    }

    int top() {
        if (q1.empty()) {
            std::cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << std::endl;
    s.pop();
    std::cout << "Top element after pop: " << s.top() << std::endl;

    return 0;
}
