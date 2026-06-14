#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b) {
    long long res = 1;

    while (b > 0) {
        if (b & 1)
            res *= a;

        a *= a;
        b >>= 1;
    }
    return res;
}

int main() {

    int a,b;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    
    cout<<"Answer is : "<< power(a, b);
   return 0;
}