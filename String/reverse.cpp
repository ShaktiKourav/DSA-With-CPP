#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"Enter string : ";
    cin >> s;

    int left = 0, right = s.length() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    cout <<"Revered String is : " <<s;

    return 0;
}