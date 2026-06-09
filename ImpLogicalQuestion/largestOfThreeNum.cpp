#include<iostream>
using namespace std;

int main() {
   int a,b,c;

   cout<<"Enter first no :";
   cin>>a;
   cout<<"Enter second no :";
   cin>>b;
   cout<<"Enter third no :";
   cin>>c;

   if(a>b && a>c) {
      cout<<"Largest no is :"<<a;
   }
   else if(b>a && b>c) {
      cout<<"Largest no is :"<<b;
   }
   else {
      cout<<"Largest no is :"<<c;
   }
   return 0;
}