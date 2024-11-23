//problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    iOS
    ll n, k;
    cin >> n >> k; 
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    
    ll left = 0, right = 0, ans = 0; // Initialize pointers and answer
    multiset<ll> ml; // Multiset to maintain the elements of the current segment in sorted order
    
    while (right < n) {
        ml.insert(v[right]); // Add the current element to the multiset
        
        auto mn = ml.begin();   // The smallest element in the current segment
        auto mx = ml.rbegin();  // The largest element in the current segment
        
        // Check if the current segment satisfies the condition of being "good"
        if ((*mx - *mn) <= k) {
            ans += right - left + 1; // All subsegments ending at 'right' are "good"
        } else {
            // Shrink the segment from the left until the condition is satisfied
            while (left <= right) {
                auto MN = ml.begin(); // Update minimum
                auto MX = ml.rbegin(); // Update maximum
                if ((*MX - *MN) <= k) { // Check if the condition is satisfied
                    break; // Stop shrinking if condition is satisfied
                }
                ml.erase(ml.find(v[left])); // Remove the leftmost element
                left++; // Move the left pointer to the right
            }
            
            // After shrinking, check if the condition is satisfied
            int mn1 = *ml.begin(), mx1 = *ml.rbegin();
            if ((mx1 - mn1) <= k) {
                ans += right - left + 1; // Count all subsegments ending at 'right'
            }
        }
        right++; // Move the right pointer to the right
    }
    
    cout << ans << nl; 
    return 0;
}
