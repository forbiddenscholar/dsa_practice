#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    // precompute
    // considering that there are only lowercase characters
    // ASCII a = 97, A = 65, 0 = 48
    int hash[26] = {0};
    for(int i=0; i<n; i++){
        hash[s[i] - 'a']++;
    }
    // fetch
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}