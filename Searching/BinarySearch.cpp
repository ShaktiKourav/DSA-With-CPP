#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int binarySearch(vector<int>&vec,int key){
    int low = 0 , high = vec.size()-1;

     while(low<=high){
        int mid = low+(high-low)/2;

    if(key==vec[mid]){
        return mid;
    }
    else if(key<vec[mid]){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
    }
}

int main(){
    int n ;
    cout<<"Enter size of Array ";
    cin>>n;

    vector<int>vec(n);

    cout<<"Enter an elements of array : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int key;
    cout<<"Enter the element to be searched : ";
    cin>>key;

    // array must be sorted for binary search 
    sort(vec.begin(),vec.end());

    // sorted ele print
    cout<<"Sorted Elements are : ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;

    if(binarySearch(vec,key)==-1){
        cout<<"Element not found";
    }
    else{
        // sorted ele index no print
        cout<<"Element found at index : "<<binarySearch(vec,key);
    }
    return 0;
}