//problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
int main()
{
    iOS
    int n;  cin >> n;
    int k;  cin >> k;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    //approaching sliding window technique
    int right = 0, left = 0;
    ll ans = 0;
    map <int, int> count;
    
    while(right < n) {
        count[v[right]]++;
        
        while (count.size() > k) {
            count[v[left]]--;
            if (count[v[left]] == 0) {
                count.erase(v[left]);
            }
            left++;
        }
        ans += right - left + 1;
        right++;
    }
    cout << ans << nl;
    return 0;
}