#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    vector<int>vec(n);

    //  Array input
    cout<<"Enter an elements of array : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    cout<<"Elements of array : ";
    for(int i=0;i<n;i++){
        cout<<vec[i] <<" ";
    }

    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(vec[i]>largest){
            largest = vec[i];
        }
    }
    cout<<endl;
    cout<<"Largest element of array : "<<largest;
    
    return 0;
}