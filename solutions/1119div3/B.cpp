#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >>n;
    int a_i = 0;
    int odd = 0;
    int even_0 = 0;
    int even_2 = 0;
    for (int i = 0; i < n; i++) {
        cin >>a_i;
        if (a_i % 2 == 1) {
            odd++;
        }else {
            if (a_i % 4 == 0) {even_0++;}
                else {even_2++;}
         }
    }
    int result = odd > even_0 ? odd : even_0;
    cout <<( result > even_2 ? result : even_2) <<"\n";
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
