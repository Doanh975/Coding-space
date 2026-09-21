#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >>n;
    string s;
    cin >>s;
    bool start = false;
    ll left_1 = 0;
    ll right_0 = 0;
    for (char ch : s) {
        if (ch == '0') right_0++;
    }
    if (s[0] == '1') {
        cout <<right_0 <<"\n";
        return;
    }
    ll result = n;
    for (char ch : s) {
        if (ch == '1') {
            left_1++;

        } else {
            right_0--;

        }
        result = min(result, (left_1 + right_0));
    }
    cout <<result <<"\n";
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
