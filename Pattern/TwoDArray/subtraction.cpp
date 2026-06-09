#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    int A[n][m],B[n][m],C[n][m];
    
    cout<<"Enter "<<n*m<<" elements  of first matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }

     
    cout<<"Enter "<<n*m<<" elements  of second matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
    }

    cout<<"First matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Second matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    // subtraction of two matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout<<"Subtraction of matrix are : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}