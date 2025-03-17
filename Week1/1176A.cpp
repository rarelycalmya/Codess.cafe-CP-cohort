#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int divide(long long n) {
    int ops = 0;
    while(n != 1) {
        if(n % 2 == 0) {
            ops+=1;
            n = n/2;
        }
        else if(n % 3 == 0) {
            ops += 2;
            n = n/3;
        }
        else if(n % 5 == 0) {
            ops += 3;
            n = n/5;
        }
        else {
            return -1;
        }   
    }
    return ops;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        cout << divide(n) << endl;
    } 
}