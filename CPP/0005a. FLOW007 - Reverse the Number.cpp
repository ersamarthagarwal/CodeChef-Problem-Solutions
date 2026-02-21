#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        // String based method
        string s = to_string(n);
        reverse(s.begin(), s.end());
        cout << stoi(s) << endl;
    }
    return 0;
}