#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool train(int n, int a, int x, int b, int y) {
    while(a != x && b != y) {
        if(a == b) return true;
        if(a == n) a = 1;
        else a+=1;
        if(b == 1) b = n;
        else b-=1;
    }
    if(a == b) return true;
    return false;
}

int main() {
    int n, a, b, x, y;
    cin >> n >> a>> x >> b >> y;
    if(train(n,a,x,b,y)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}