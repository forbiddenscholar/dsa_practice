#include<bits/stdc++.h>
using namespace std;

// insertion in heaps 
void insert(vector<int> &arr, int n, int x){
    // insert at last
    arr.push_back(x);
    // store the index of inserted element
    int idx = n;
    int parent = idx/2;
    while(idx != 0){// check until reached the root or heap property unsatisfied
        if(arr[parent] > arr[idx]){
            swap(arr[parent], arr[idx]);
            idx = parent;
            parent = (idx-1)/2;
        }
        else break;
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int x; //element to be inserted
    cin >> x;
    insert(arr, n, x);
    // print the array after insertion
    for(int i=0; i<n+1; i++)
        cout << arr[i] << " ";
        
    return 0;
}