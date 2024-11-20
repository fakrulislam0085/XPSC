#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
int main()
{
    iOS
    int t;
    cin >> t;
    while(t--) {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll x = s%n;
        if(x <= b && a*n + b <=s) {
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        }
    }
    return 0;
}