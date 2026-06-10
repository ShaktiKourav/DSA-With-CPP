// STOCK BUY & SELL 
// Que prices = [7,1,5,3,6,4] return max profit

// maxprofit = mp = 0
// bestBuy = 7 = arr[0]

// min = bestbuy 
// max = selling price

#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector<int>&);
int main()
{
    
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

    cout<<"\nMax Profit : "<<maxprofit(vec);
    return 0;
}
int maxprofit(vector<int>&prices)
{
   int maxp = 0;
   int bestBuy = prices[0];// assume 
   for(int i=1;i<prices.size();i++)// 1th index s start krenge 
   {
    if(prices[i] >bestBuy) {  // agr buy s selling jada rhegi to to maximum profit m store ho jaega 
    maxp = max(maxp,prices[i]-bestBuy);
   }
   bestBuy = min(bestBuy,prices[i]);
}
return maxp;
}