#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        // Method 1: Using Modulo Operator
        int remainder = a % b;
        cout << remainder << endl;
    }
    return 0;
}