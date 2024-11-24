//problem link: https://codeforces.com/problemset/problem/1692/E
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
        ll n, s;
        cin >> n >> s;
        ll sum = 0;
        deque <ll> dq(n);
        for(ll i=0; i<n; i++) {
            cin >> dq[i];
            sum += dq[i];
        }
        
        if(sum < s) {   //It is not possible to have S by removing values
            cout << -1 << nl;   
        }
        else if(sum == s) {     //No need to remove values as we already have S
            cout << 0 << nl;
        }
        else {
            ll left = 0, right = 0, current_sum = 0, max_length = 0;
            /*here, we will count maximum substring length with sum S, then we can simply minus 
            this length from our n to have the minimum operations*/
            while(right < n) {
                current_sum += dq[right];
                
                while(current_sum > s) {
                    current_sum -= dq[left];
                    left++;
                }
                
                if(current_sum == s) {
                    max_length = max(max_length, right - left + 1);
                }
                right++;
            }
        // Minimum operations = elements outside the longest subarray with sum 's'
        int min_operations = n - max_length;
        cout << min_operations << nl;
    }
    }
    return 0;
}