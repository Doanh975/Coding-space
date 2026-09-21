#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int ballast = 0;
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        b[i] = a - (i + 1);
    }
    sort(b.begin(), b.end());

    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) continue;
        if (b[i] == b[i - 1] + 1) cur++;
        else cur = 1;
        ans = max(ans, cur);
    }
    cout << ans << "\n";
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
