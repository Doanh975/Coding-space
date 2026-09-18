#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >>n;
    int loc = -1;
    bool finded = false;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!finded && (a[i] != 0)) {
            a[i] = 1;
            finded = true;
        } else if (a[i] != 0) loc = i;
    }
    if (loc >= 0)
    a[loc] = 1;
    for (int i = 0; i < n; i++) {
        a[i] = a[i] == -1 ? 0 : a[i];
    }
    for (int &x : a) {
        cout << x  <<" ";
    }
    cout <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
