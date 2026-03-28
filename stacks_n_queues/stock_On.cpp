#include<bits/stdc++.h>
using namespace std;

vector <int> countSpan(vector <int> &arr){
    int n = arr.size();
    vector <int> span(n);
    stack <int> st;

    for(int i=0; i<n; i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        // if stack is empty then all left elements are greater than the current one 
        if(st.empty()){
            span[i] = i+1;
        }
        // else, count until the last greatest element 
        else{
            span[i] = i - st.top();
        }

        st.push(i);
    }

    return span;
}

int main(){
    vector <int> arr;
    int input;
    while(cin >> input) arr.push_back(input);
    vector<int> span = countSpan(arr);
    for(int x : span){
        cout << x << " ";
    }
    return 0;
}