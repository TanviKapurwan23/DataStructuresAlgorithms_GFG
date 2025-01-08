#include <iostream>
#include <queue>

void reverseQueue(std::queue<int>& q) {
    if (q.empty()) {
        return;
    }
    
    int front = q.front();
    q.pop();
    
    reverseQueue(q);
    
    q.push(front);
}

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    std::cout << "Original Queue: ";
    std::queue<int> temp = q;
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;
    
    reverseQueue(q);
    
    std::cout << "Reversed Queue: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
    
    return 0;
}
