#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < nums.size(); i++) {
        currSum += nums[i];

        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum Subarray Sum = " << maxSubArray(nums);

    return 0;
}