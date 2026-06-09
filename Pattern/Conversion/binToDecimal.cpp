#include<iostream>
using namespace std;
    int BinToDecimal(int BinNum){
        int pow = 1;
        int ans = 0;
        while(BinNum>0){
           
        // right to left 2^3 2^2 2^1 2^0 
        int rem = BinNum%10;
        ans += rem*pow;
        BinNum = BinNum/10; 
        pow = pow*2;
        }
        return ans;

    }
    int main(){
        int BinNum ;
        cout<<"Enter Binary number : ";
        cin>>BinNum;
        cout<<"Decimal of "<<BinNum<<" = "<<BinToDecimal(BinNum)<<endl;
        return 0;
        
    }