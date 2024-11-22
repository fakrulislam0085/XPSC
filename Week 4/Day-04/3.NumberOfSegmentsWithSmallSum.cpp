//problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
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
    ll ans = 0;
    ll sum = 0;
    
    while(right < n) {
        sum += v[right];
        
        if(sum <= k) {
            ans += (right - left) + 1;  /*Every subsegment with n elements create total n numbers subarray.
            For example, 1,2,3, here [1] will create 1 subarray, which is less than k.
            1,2] will create total 2 subarrays, which are less than k. [1,2,3] will create 
            total 3 subarrays, which are less than k. Total subarray will be n = (n+1) / 2 */
        }
        else {
            while(sum > k && left <= right) {
                sum -= v[left];
                left++;
            }
            if(sum <= k) {
                ans += (right - left) + 1;   //after while loop, we will check here whether the sum is still less than k or not
            }
        }
        
        right++;
    }
    
    cout << ans << nl;
    return 0;
}