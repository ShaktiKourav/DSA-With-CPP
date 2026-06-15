#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main() {
    string s;
    cout<<"Enter sentence : ";
    getline(cin, s);

    stack<string> st;
    stringstream ss(s);
    string word;

    while (ss >> word) {
        st.push(word);
    }

    cout<<"Reverse of sentence is : ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();

        if (!st.empty())
            cout << " ";
    }

    return 0;
}