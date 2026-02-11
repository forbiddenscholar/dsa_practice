#include<bits/stdc++.h>
using namespace std;

class TowersOfHanoi{
    public:
    void solve(char source, char dest, char aux, int n){
        // base case
        if (n==0) return;
        // move n-1 disks from source to auxilary via destination
        solve(source, aux, dest, n-1);
        // move the last disk from source to destination
        cout << "Move disk " << n << " from rod " << source << " to rod " << dest << endl;
        // move the n-1 disks from auxilary to destination via source 
        solve(aux, dest, source, n-1);
    }
};

int main(){
    int n=3;
    char A, B, C;
    TowersOfHanoi toh;
    toh.solve('A', 'B', 'C', n);
}