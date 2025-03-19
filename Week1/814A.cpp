#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n>> k;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < k; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            int maxEle = *max_element(b.begin(), b.end());
            b.erase(find(b.begin(), b.end(), maxEle));
            a[i] = maxEle;
        }
    }

    vector<int> a_sort;
    a_sort.assign(a.begin(), a.end());
    sort(a_sort.begin(), a_sort.end());
    if(a_sort == a) cout << "No" << endl;
    else cout << "Yes" << endl;
}
    