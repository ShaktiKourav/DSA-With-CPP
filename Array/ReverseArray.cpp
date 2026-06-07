#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(vector<int>&v){
    
    // Reversing array
    reverse(v.begin(), v.end());

    // Printing Reversed Array
    cout<<"Reversed Array : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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

    // function call 
    reverseArray(vec);
    return 0;

}


