#include<iostream>
using namespace std;

int main(){
    // take input of the array
    int n;
    cin >> n;
    // assuming the maximum number input can be 12,
    // we make an array of size 13 so that we can get an array with index 12, initialized with 0
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    //precompute to store hash values
    int hash[13] =  {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    //fetch and out
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}