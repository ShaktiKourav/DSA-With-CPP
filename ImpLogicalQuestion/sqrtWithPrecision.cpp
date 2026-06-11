#include<iostream>
using namespace std;

int mySqrt(int x){
    long long s = 0;
    long long e = x;
    long long ans = -1;

    while(s <= e){
        long long mid = s + (e - s) / 2;
        long long square = mid * mid;

        if(square == x){
            return mid;
        }
        else if(square < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;   // FIX
        }
    }

    return ans;
}

double morePrecision(int n, int tempsol, int precision){
    double factor = 1;
    double ans = tempsol;

    for(int i = 0; i < precision; i++){
        factor /= 10;

        for(double j = ans; j * j < n; j += factor){
            ans = j;
        }
    }

    return ans;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int p;
    cout << "Enter precision point: ";
    cin >> p;

    int ans = mySqrt(n);

    double finalAns = morePrecision(n, ans, p);

    cout << "sqrt of " << n << " is: " << finalAns;

    return 0;
}