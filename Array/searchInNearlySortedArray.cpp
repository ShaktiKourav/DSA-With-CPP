#include<iostream>
#include<vector>
using namespace std;


int Searching(vector<int>&vec, int target){
    int st = 0;
    int end = vec.size()-1;

    while(st <= end){
        int mid = st+(end-st)/2;
        if(mid-1>=0 && vec[mid-1] == target){
                return mid-1;
        }
        if(vec[mid] == target){
            return target;
        }
        if(mid+1 <= vec.size()-1 && vec[mid+1] == target){
            return mid+1;
        }
        if(target > vec[mid]){
            mid = mid +2;
        }else{
            mid = mid-2;
        }
    }
    return -1;

}

int main(){

   int n ;
   int target;
   cout<<"Enter the size of vector ";
   cin>>n;

   vector<int>vec(n);
   cout<<"Enter elements of nearly sorted Array : ";
   for(int i=0;i<n;i++){
     cin>>vec[i];
   }

   cout<<"Nearly sorted array : ";
   for(int i=0;i<n;i++){
     cout<<vec[i]<<" ";
   }

   cout<<"\nEnter target : ";
   cin>>target;

   int ans = Searching(vec,target);

   if(ans == -1){
     cout<<"Element is not present in arrray ...";
   }else{
     cout<<"\nElement is present at "<<ans<<" index..";
   }
    return 0;
}