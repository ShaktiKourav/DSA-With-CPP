#include<iostream>
#include<vector>
using namespace std;

void Sum(vector<int>&v){
    int s=0; // initially sum = 0

    for(int i=0;i<v.size();i++){
        s += v[i];
    }

    cout<<"Sum of array is : "<<s<<endl;;
}

int main(){
    int n ;
    cout<<"Enter size of Array : ";
    cin>>n;

    vector<int>vec(n);

    cout<<"Enter an elements of array : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    
    cout<<"Elements of array are : ";
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    // function call 
    Sum(vec);
    return 0;
}