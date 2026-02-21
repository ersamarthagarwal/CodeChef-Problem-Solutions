#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        // For last digit
        int last = N % 10;

        // For First digit
        while (N >= 10){
            N = N / 10;
        }
        int first = N;
        cout << first + last << endl;
    }
    return 0;
}