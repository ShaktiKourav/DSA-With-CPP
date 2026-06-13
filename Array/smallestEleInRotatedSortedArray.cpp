#include<iostream>
#include<vector>
using namespace std;

// it is a point where rotation happened
// Example              0 1 2 3 4 5 6 7 
// after roration       4 5 6 7 0 1 2 3
// pivot ele = 0 
// pivot index = 4

int FindPivotEle(vector<int>&vec,int target){
        int st = 0;
        int end = vec.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(vec[mid] == target){
                return mid;
            }
            if(vec[st] <= vec[mid]){
                if(vec[st] <= target && target <= vec[mid]){
                    end = mid-1;
                }else{
                    st = mid +1;
                }
            }else{
               if(vec[mid] <= target && target <= vec[end]){
                st = mid+1;
               }else{
                end = mid-1;
               }
            }
        }

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

    int target;
    cout<<"\nEnter target :";
    cin>>target;

    int ans = FindPivotEle(vec,target);

    cout<<"index of pivot ele : "<<ans;
    return 0;
}