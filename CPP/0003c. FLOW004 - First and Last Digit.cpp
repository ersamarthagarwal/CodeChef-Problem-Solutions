#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        // Method 3: Using Logarithms
        int last = n % 10;
        int digit = (int) log10 (n);
        int first = n / (int) pow (10, digit);
        int sum = first + last;
        cout << sum << endl;
    }
    return 0;
}