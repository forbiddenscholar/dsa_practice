#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10, 5, 10, 15, 10, 5};
    // precompute
    unordered_map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        cout << it.first << "->" << it.second << endl;
    }
}