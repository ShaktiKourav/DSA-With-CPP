#include<iostream>
#include<vector>
using namespace std;


int LinearSearch(vector<int>&arr, int key) {
     
    for(int i=0;i<arr.size();i++) {
        
        if(arr[i]==key) {
             return i;
         }
        
    }
     return -1;
}
int main() {

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to be searched : ";
    cin>>key;

    if(LinearSearch(arr,key) == -1) {
        cout<<"Element not found";
    }
    else {
        cout<<"Element found at index : "<<LinearSearch(arr,key);
    }

    return 0;
}