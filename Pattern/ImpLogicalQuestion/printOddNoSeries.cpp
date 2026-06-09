#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Even numbers series : ";
    for(int i=1;i<=n;i++){
        if(i%2==1)
        cout<<i<<" ";
    }
    return 0;
}