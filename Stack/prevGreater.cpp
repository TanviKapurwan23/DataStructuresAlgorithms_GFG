#include<iostream>
#include<stack>
using namespace std;

// Naive

void printPrevGreater(int arr[], int n){
    for(int i=0; i<n; i++){
        int j;
        for(j=i-1; j>=0; j--){
           if(arr[j] > arr[i]){
            cout<<arr[j]<<" ";
            break;
           }
        }
        if(j == -1){
            cout<<-1<<" ";
        }
    }
}

// O(N) Solution

void printPrevGreater(int arr[], int n){
    stack<int> s;
    s.push(arr[0]);
    for(int i=0; i<n; i++){
        while(s.empty() == false && s.top() <= arr[i]){
            s.pop();
            int pg = (s.empty()) ? -1 : s.top();
            cout<<pg<<" ";
            s.push(arr[i]);
        }
    }
}