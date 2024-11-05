/*368B codeForces, Round 215, div. 2*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    // for(int i=0; i<=m; i++)
    // {
    //     int pos;
    //     cin >> pos;
    //     set <int> s;
    //     for(int j=pos-1; j<n; j++)
    //     {
    //         s.insert(v[j]);
    //     }
    //     cout << s.size() << '\n';
    // }
    
    set <int> s;
    vector <int> cnt(n);
    for(int i=n-1; i>=0; i--) {
        s.insert(v[i]);
        cnt[i] = s.size();
    }
    
    for(int i=0; i<m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos-1] << '\n';
    }
    
    return 0;
}
