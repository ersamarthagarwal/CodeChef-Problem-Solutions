#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        // Method 2: Without using extra variable (directly)
        cout << a + b << endl;
    }
    return 0;
}