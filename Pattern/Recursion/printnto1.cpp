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
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // function call
    printNto1(n); 
    return 0;
}