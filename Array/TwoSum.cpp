#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // <value,index>

    int need=0;

    for(int i=0;i<nums.size();i++){
         need = target- nums[i];

        if(mp.find(need) != mp.end()){
            return {mp[need],i};
        }
        mp[nums[i]] = i;
        
    }
    return{};
}
    int main(){
        int n;
        int target;
        cout<<"Enter the size of Array : ";
        cin>>n;
        vector<int>vec(n);

        //  Array input
        cout<<"Enter an elements of array : ";
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        cout << "Enter target : ";
        cin >> target;

         // function call 
         vector<int> ans = twoSum(vec, target);

        if(ans.size() == 2) {
        cout << "Indices : " << ans[0] << " " << ans[1];
        } else {
        cout << "No pair found";
         }
          return 0;
    }