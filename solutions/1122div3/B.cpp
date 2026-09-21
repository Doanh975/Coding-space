#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a, b, c;
    cin >>a;
    cin >>b;
    cin >>c;
    cout <<(a < b ? max(b - a, a + c - b) : (a + c - b)) <<"\n";

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
