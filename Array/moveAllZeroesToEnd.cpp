#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveAllZeroToEnd(vector<int>&v){
    int n = v.size();
    int j=0;
    
     for(int i=0;i<n;i++){
        if(v[i] != 0){
         swap(v[i],v[j]);
        j++;
        }
    
     }

     cout<<"Elements of array after moving zero to end  : ";
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
}

int main(){
  int n ;
  cout<<"Enter size of Array : ";
  cin>>n;

  vector<int>vec(n);
  cout<<"Enter elements of array : ";
  for(int i=0;i<n;i++){
    cin>>vec[i];
  }
  
  cout<<"Elements of array are : ";
  for(int i=0;i<n;i++){
   cout<<vec[i]<<" ";
  }
  cout<<endl;

  // function call
  moveAllZeroToEnd(vec);
      return 0;
}
