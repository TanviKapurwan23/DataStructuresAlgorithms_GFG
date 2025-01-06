#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Method 1: Using reverse (O(N) time, O(N) space)
bool isPal1(string &str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);
}

// Method 2: Efficient method (O(N) time, O(1) space)
bool isPal2(string &str) {
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end) {
        if (str[begin] != str[end]) {
            return false;
        }
        begin++;
        end--;
    }
    return true; 
}

int main() {
    string testStr = "radar";
    
    cout << "Using reverse method: " << (isPal1(testStr) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Using efficient method: " << (isPal2(testStr) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}
