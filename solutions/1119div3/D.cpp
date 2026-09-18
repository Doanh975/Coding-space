#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >>n;
    int temp = 0;
    int count_0 = 0;
    vector<int> a(n);
    vector<vector<int>> occ(n+1);

    for (int i = 0; i<n; i++) {
        cin >>temp;
        a[i] = temp;
        if (temp == 0) count_0++;
        if (temp <= n) occ[temp].pb(i);
    }

    if (count_0 == 1) {
        cout <<"NO\n";
        return;
    }
    string result(n, 'C');

    for (int idx = 0; idx < (int)occ[0].size(); idx++) {
        result[occ[0][idx]] = (idx % 2 == 0) ? 'A' : 'B';
    }

    for (int v = 1; v <= n; v++) {
        for (int idx = 0; idx + 1 < (int)occ[v].size(); idx += 2) {
            result[occ[v][idx]] = 'A';
            result[occ[v][idx + 1]] = 'B';
        }
    }

    cout << "YES\n" << result << "\n";

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
