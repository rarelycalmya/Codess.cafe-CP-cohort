#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n == m || (n*m) % 2 == 1) cout << "Tonya" <<endl;
        else cout << "Burenka" <<endl;
    }
}

// Doesnt work
    