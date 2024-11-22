//problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
int main()
{
    iOS
    int n;  cin >> n;
    ll k;   cin >> k;
    vector <ll> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    //sliding window approach
    int left = 0, right = 0;
    ll ans = 0, sum = 0;
    
    while(right < n) {
        
        if(sum < k) {
            sum += v[right];
        }
        
        if(sum >= k && left <= right) {
            ans += (n - right);     //our indexing starts from 0, so here the ans will be ans += ((n-1) - right) +1 => ans += (n- right)
            sum -= v[left];
            left++;
            
        }
        if (sum < k) {
            right++;
        }
    }
    
    cout << ans << nl;
    return 0;
}