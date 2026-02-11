#include <iostream>
using namespace std;

int productSum(n){
    int last_digit = n%10;
    n /= 10;
    int second_last = n%10;
    int sum = last_digit;
    sum = multiply(n, sum);
}

int multiply(n, sum){
    int last_digit = sum;
    int second_last = n%10;
    n /= 10;
    sum = last_digit*second_last;
    if (n==0) return sum;
    sum = add(n, sum);
    return sum;
}

int add(n, sum){
    int last_digit = sum;
    int second_last = n%10;
    n /= 10;
    sum = last_digit + second_last;
    if (n==0) return sum;
    sum = multiply(n, sum);
    return sum;
}

int main() {
    int n = 12345;
    int result = productSum(n);
    return 0;
}