#include<iostream>
using namespace std;

int revArr(int arr[], int l, int r){
    if(l>=r) return 0;
    swap(arr[l], arr[r]);
    revArr(arr, l+1, r-1);
    return 0;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    revArr(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}