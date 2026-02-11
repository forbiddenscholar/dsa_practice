#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int S[n] = {0};
    cout << "enter the array";
    for(int i=0; i<n; i++){
        cin >> S[i];
    }
    for(int i=0; i<n; i++){
        if (i == S[i]){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}