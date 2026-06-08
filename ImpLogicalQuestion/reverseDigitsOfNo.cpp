#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        int rem = n%10;  // last digit 
        rev = rev*10 + rem; 
        n = n/10; // remove last digit
    }
    return rev;
}

int main() {
    int n;
    int ans ;
    cout<<"Enter a number :";
    cin>>n;

    ans = reverse(n);
    cout<<"Reverse of "<<n<<" is : "<<ans;
   
    return 0;
}