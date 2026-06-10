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
    
    cout<<"Enter "<<n*m<<" elements  of matrix : ";
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

    int maxSum = INT_MIN;
    int rowIndex = -1;
    
    
    for(int i=0;i<n;i++){
         int currSum = 0;

        for(int j=0;j<m;j++){
            currSum += arr[i][j];
        }

        if(currSum > maxSum){
            maxSum = currSum;
            rowIndex = i;
        }
    }

    cout<<"Row no. "<<rowIndex<<" having maximum sum is : "<<maxSum<<endl;
    
    
    return 0;
}