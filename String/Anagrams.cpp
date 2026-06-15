#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
     cout<<"Enter first string ";
    cin >> s1;
    cout<<"Enter second string ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}