#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=14, b=5;
    b = a + b - (a=b);
    cout << "a=" << a << " b=" << b;
    return 0;
}