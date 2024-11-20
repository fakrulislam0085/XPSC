/*CodeForces- ITMO Academy
B.Number of smaller*/
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
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    
    int left = 0, right = 0, count = 0;
    while(right < m) {
        if(left < n && a[left] < b[right]) {
            count++;
            left++;
        }
        else {
            cout << count << " ";
            right++;
        }
    }
    
    return 0;
}