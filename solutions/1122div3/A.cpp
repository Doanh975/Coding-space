#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // code o day
    int n;
    cin >>n;
    int temp, num;
    cin >>num;
    cin >>temp;
    num = temp < num ? temp : num;
    cin >>temp;
    num = temp < num ? temp : num;
    cout << n-num <<"\n";
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
