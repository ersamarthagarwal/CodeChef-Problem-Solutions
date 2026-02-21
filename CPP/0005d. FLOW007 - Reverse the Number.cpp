#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int rev = 0;
        // Iterative Method (while loop)
        while (n > 10){
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        cout << rev << endl;
    }
    return 0;    
}