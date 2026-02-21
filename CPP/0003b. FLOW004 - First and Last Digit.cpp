#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        // Using String
        string s = to_string(n);
        int sum = (s[0] - '0') + (s[s.length() - 1] - '0');
        cout << sum << endl;
    }
    return 0;
}