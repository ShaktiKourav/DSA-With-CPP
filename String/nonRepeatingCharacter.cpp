#include <iostream>
using namespace std;

int main() {
    string s;
     cout<<"Enter a string : ";
    cin >> s;
  

    int freq[256] = {0};

    // Count frequency
    for(char ch : s) {
        freq[ch]++;
    }

    // Find first non-repeating character
    for(char ch : s) {
        if(freq[ch] == 1) {
            cout << ch;
            return 0;
        }
    }

    cout << "No non-repeating character";

    return 0;
}