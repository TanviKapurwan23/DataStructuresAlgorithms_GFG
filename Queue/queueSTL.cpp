#include <iostream>
#include <queue>
using namespace std;

int main() {
    std::queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;
    return 0;
}
