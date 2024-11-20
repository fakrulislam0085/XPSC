//Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
int main()
{
    iOS
    
    int n;
    ll s;
    cin >> n >> s;
    vector <int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    int left = 0, right = 0, ans = 0;
    ll sum = 0;
    while(right < n) {
        sum += a[right];
        if(sum <= s) {
            ans = max(ans, right-left +1);
        }
        else {
            sum -= a[left];
            left++;
        }
        right++;
    }
    
    cout << ans << nl;
    return 0;
}