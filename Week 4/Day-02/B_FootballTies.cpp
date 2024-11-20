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
        int x, y;
        cin >> x >> y;
        
        int a = x%3, b = y%3;
        if(a==b) {
            cout << a << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    return 0;
}