// C++ program to findtime complexity for single for loop
#include <bits/stdc++.h>
using namespace std;
// main Code
int main()
{
    //declare variable
    int a = 0, b = 0;
    //declare size 
    int N = 5, M = 5;
    // This loop runs for N time
    for (int i = 0; i < N; i++) {
        a = a + 5;
    }
    // This loop runs for M time
    for (int i = 0; i < M; i++) {
        b = b + 10;
    }
    //print value of a and b
    cout << a << ' ' << b;
    return 0;
}
