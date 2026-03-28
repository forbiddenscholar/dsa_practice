#include<bits/stdc++.h>
using namespace std;

vector <int> countSpan(vector <int> &arr){
    int n = arr.size();
    vector <int> span(n, 1);

    //count for each element, the left element should be less than the current element (this is in O(n2) time complexity and O(1) space)
    for(int i=0; i<n; i++){
        for(int j=i-1; (j>=0 && arr[i]>=arr[j]); j--){
            span[i]++;
        }
    }

    return span;
}

int main(){
    vector <int> arr;
    int input;
    while(cin >> input) arr.push_back(input);
    vector <int> span = countSpan(arr);
    for(int x : span){
        cout << x << " ";
    }
    
    return 0;
}