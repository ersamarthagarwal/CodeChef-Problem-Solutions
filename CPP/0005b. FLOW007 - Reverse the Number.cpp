#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int rev = 0;
        // Mathematical Method (for loop)
        for (; n > 0; n /= 10){
            rev = rev * 10 + (n % 10);
        }
        cout << rev << endl;
    }
    return 0;    
}