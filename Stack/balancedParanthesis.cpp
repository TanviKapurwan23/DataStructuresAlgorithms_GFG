#include <iostream>
#include <stack>
using namespace std;

// Function to check if two characters are matching pairs
bool matching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check if the string has balanced parentheses
bool isBalanced(const string &str) {
    stack<char> s;
    for (char x : str) {
        if (x == '(' || x == '{' || x == '[') {
            s.push(x);
        } else {
            if (s.empty() || !matching(s.top(), x)) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

// Example usage
int main() {
    string test = "{[()]}";
    if (isBalanced(test)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    return 0;
}

/*
Time Complexity: O(n), where 𝑛 n is the length of the string.
Space Complexity: 𝑂(𝑛) O(n), due to the use of the stack in the worst case (e.g., all opening brackets).
*/