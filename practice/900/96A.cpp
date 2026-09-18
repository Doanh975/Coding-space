#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >>s;
    int count = 1;
    bool danger = false;
    for(int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            count++;
            if (count >= 7) danger = true;
        } else count = 1;
    }

    cout <<(danger ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // bo comment neu bai co nhieu test case

    while (t--) {
        solve();
    }

    return 0;
}
