#include<iostream>
using namespace std;

void printNto1(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    printNto1(n-1);
}