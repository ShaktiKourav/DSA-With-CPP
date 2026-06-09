#include<iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter number of  rows of first matrix : ";
    cin>>m;
    cout<<"Enter number of columns of first matrix : ";
    cin>>n;

    int p,q;
    cout<<"Enter number of  rows of second matrix : ";
    cin>>p;
    cout<<"Enter number of columns of second matrix : ";
    cin>>q;


    int A[m][n],B[p][q],C[m][q];

    // condition of multiplication n == p (col of first matrix == row of second matrix)
    if(n != p){ 
        cout<<"Multiplication is not possible";
        return 0;
    }
    
    cout<<"Enter "<<m*n<<" elements  of first matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

     
    cout<<"Enter "<<p*q<<" elements  of second matrix : ";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>B[i][j];
        }
    }

    cout<<"First matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Second matrix is : "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    // initialize C with 0
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            C[i][j] = 0;
        }
    }
   
    // multiplication
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout<<"Multiplication of matrix are : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}