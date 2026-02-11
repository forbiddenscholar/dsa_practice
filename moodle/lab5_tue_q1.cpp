#include<iostream>
using namespace std;

int unique_ways = 0;

int climb(int to_climb){
    if(to_climb == 0) return 1;
    else if(to_climb < 0) return 0;
    return climb(to_climb-1) + climb(to_climb-2);
}

int main(){
    int n = 7, k = 0;
    cout << climb(n-k) << endl;
}