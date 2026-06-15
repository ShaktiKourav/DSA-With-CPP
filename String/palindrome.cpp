#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"Enter a string ";
    cin >> s;

    int left = 0;
    int right = s.length() - 1;

    bool palindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}