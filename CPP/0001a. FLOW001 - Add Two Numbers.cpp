#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        // Method 1: Using Extra Variable
        int sum = a + b;
        cout << sum << endl;
    }
    return 0;
}
