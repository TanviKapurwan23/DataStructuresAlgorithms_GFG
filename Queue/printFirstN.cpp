#include <iostream>
#include <queue>
#include <string>

using namespace std;

void printFirstN(int n) {
    queue<string> q;
    q.push("5");
    q.push("6");
    for (int i = 0; i < n; i++) {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printFirstN(n);
    return 0;
}
