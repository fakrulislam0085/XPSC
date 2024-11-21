//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main() {
    iOS
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int right = 0, left = 0;
    ll ans = INT_MAX;  
    ll sum = 0;

    // Use sliding window approach
    while (right < n) {
        if(sum < s ) {
            sum += v[right];  
        }
        if(sum >= s) {
            ll length = right - left + 1;
            ans = min(ans, length);  
            sum -= v[left];  
            left++;  
        }
       
        if(sum < s ) {
            right++; 
        }
    }

    
    if (ans == INT_MAX) {
        cout << -1 << endl;  
    } else {
        cout << ans << endl;  
    }

    return 0;
}
