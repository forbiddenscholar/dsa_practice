#include<bits/stdc++.h>
using namespace std;

vector <int> nextGreaterElement(vector <int> &arr){
    int n = arr.size();
    vector <int> result(n, -1);
    stack <int> st;
    
    // start to traverse from the right of the array
    for (int i=n-1; i>=0; i--){

        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        // if the stack is not empty then the top element is the next greatest
        if(!st.empty()){
            result[i] = st.top();
        }

        st.push(arr[i]);
    }

    return result;
}

int main(){
    vector <int> arr;
    int value;
    while (cin >> value) arr.push_back(value);
    vector <int> result = nextGreaterElement(arr);
    for(int x : result) cout << x << " ";
    return 0;
}