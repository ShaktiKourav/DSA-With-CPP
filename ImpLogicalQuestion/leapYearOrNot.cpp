#include<iostream>
using namespace std;

void leapYear(int year){

   if(year%100 == 0){
           if(year%400 == 0){
               cout<<year<<" is a leap year";
           }
           else{
               cout<<year<<" is not a leap year";
           }
   }
   else{
        if(year%4 == 0){
           cout<<year<<" is a leap year";
       }
       else{
           cout<<year<<" is not a leap year";   
         
   }
   }
}

int main(){

    int year;
    cout<<"Enter the year: ";
    cin>>year;

    // function call
    leapYear(year);
    return 0;
}