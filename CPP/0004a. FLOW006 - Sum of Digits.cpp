#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        int sum = 0;
        while (N > 0){
            int digit = N % 10;
            sum += digit;
            N = N / 10;
        }
        cout << sum << endl;
    }
    return 0;
}