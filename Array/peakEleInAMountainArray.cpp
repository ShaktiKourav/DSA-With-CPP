#include<iostream>
#include<vector>
using namespace std;

int PeakEleInMountain(vector<int>& vec){
   int low =1;
   int high = vec.size()-2;
   while(low<=high){
    int mid = low+(high-low)/2;
    // peak
    if(vec[mid]-1<vec[mid] && vec[mid] > vec[mid+1]){
        return mid;
    }else if(vec[mid] <vec[mid+1]){
        low = mid+1;
    }else{
        high =mid-1;
    }
   }
   return -1;
}

int main(){
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

    int ans = PeakEleInMountain(vec);
    cout<<"\nindex is "<<ans;
    cout<<"\nelement is : "<<vec[ans];
    return 0;
}