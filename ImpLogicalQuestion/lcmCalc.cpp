#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
long long lcm(int a, int b) {
    return (1LL * a / gcd(a, b)) * b;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;

    return 0;
}