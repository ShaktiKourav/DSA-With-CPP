#include<iostream>
#include<Climits>
using namespace std;
int main()
{

    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    int arr[n][m];
    
    cout<<"Enter "<<n*m<<" elements  of matrix (only 0's and 1's): ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Elements of matrix are : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int maxOnes = INT_MIN;
    int rowIndex = -1;
    
    
    for(int i=0;i<n;i++){
         int countOnes = 0;

        for(int j=0;j<m;j++){
            if(arr[i][j] == 1){
                countOnes++;
            }
        }

        if(countOnes > maxOnes){
               maxOnes = countOnes;
               rowIndex = i;
        }
           
    }

          
    cout<<"Row no. "<<rowIndex<<" having maximum 1's is : "<<maxOnes<<endl;
    
    
    return 0;
}