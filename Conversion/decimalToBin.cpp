#include<iostream>
using namespace std;
int DecToBinary(int DecNum){
        int pow = 1;
        int ans = 0;

        while(DecNum>0){
        int rem = DecNum%2; // remainder 0 or 1
        DecNum = DecNum/2;  // quatient 
        ans += rem*pow; // ans = ans + rem*pow  
        pow = pow*10; //  power  update
        }
        return ans;

    }
    int main(){
        int DecNum ;
        cout<<"Enter Decimal number : ";
        cin>>DecNum;
        cout<<"Binary of "<<DecNum<<" = "<<DecToBinary(DecNum)<<endl;
        return 0;
        
    }