/*codeForces ITMO academy
C. Number OF Equal*/
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
int main()
{
    iOS
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    
    int left = 0, right = 0;  //left for a(n) vector, right for b(n) vector
    ll totalPair = 0;     //for counting total pair
    
    while(left < n && right < m) {
        int current = a[left], cnt1 = 0, cnt2 = 0;
        
        while(left < n && a[left] == current) {
            cnt1++, left++;     //count a[left] value
        }
        while(right < m && current > b[right]) {
            right++;    //if current is greater than b[right], we increse right 
        }
        while(right < m && b[right] == current) {
            cnt2++, right++;    //count b[right] value
        }
        
        totalPair += (1ll * cnt1 * cnt2);     //for avoiding overflow we use 1ll (typecasting) here
        
    }
    
    cout << totalPair << nl;
    return 0;
}