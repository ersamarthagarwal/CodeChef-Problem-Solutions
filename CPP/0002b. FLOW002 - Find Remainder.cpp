#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        // Method 2: Using Formula
        int quotient = a / b;
        int remainder = a - (quotient * b);
        cout << remainder << endl;
    }
    return 0;
}