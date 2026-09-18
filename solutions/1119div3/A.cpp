#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    int result = 0;
    cin >>n;
    cin >>k;
    string s;
    cin >>s;
    for (int i = 0; i<n; i = i + k) {
        for (int j = 0; j < k; j++) {
            if (s[i+j] == '0') goto no_0;
        }
        result++;
        no_0:;
    }
    cout <<result <<endl;
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
