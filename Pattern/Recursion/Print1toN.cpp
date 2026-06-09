#include<iostream>
using namespace std;

// recursive call
void print1toN(int n) {
    if(n==1) {
        cout << 1 << " "; // base case
        return ; 
    } 
         
         print1toN(n-1); // recursive call
         cout << n << " ";
    
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin >> n;
  print1toN(n);
    return 0;
}