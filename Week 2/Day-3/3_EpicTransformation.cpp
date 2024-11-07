/*codeforces- 	1506D - Epic Transformation */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map <int,int> cnt;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            cnt[x] = cnt[x] + 1;   //map[key] = value
        }
        
        // for(auto [x, y] : cnt) {
        //     cout << x << " " << y << '\n';
        // }
        priority_queue <int> pq;
        for(auto [x, y]: cnt) {
            pq.push(y);
        }
        
        while(!pq.empty()) {
            // cout << pq.top() << '\n';
            // pq.pop();
            
            if(pq.size() < 2)
                break;
                
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;
            if(x > 0) {
                pq.push(x);
            }
            if(y > 0) {
                pq.push(y);
            }
        }
        
        int ans = 0;
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << '\n';
    }
    
}
