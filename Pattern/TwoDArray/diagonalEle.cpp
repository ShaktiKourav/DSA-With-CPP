#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    int A[n][m];
    
    cout<<"Enter "<<n*m<<" elements  of first matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }

     
    cout<<"First matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Diagonal elements are : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                cout<<A[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}