#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout<<"Enter integers like string : ";
    getline(cin,str);
    stringstream ss(str);

    int a, b, c;
    ss >> a >> b >> c;

    cout<<"sum is : ";
    cout << a + b + c;
    return 0;
}