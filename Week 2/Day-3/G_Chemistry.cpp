#include <bits/stdc++.h>
using namespace std;

class compare {
public:
    bool operator()(int a, int b) {
    if(a%2 != 0 && b%2 == 0)    return false;
    else if(a%2 == 0 && b%2 != 0)   return true;
    return a>b;
}
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        map<char, int> cnt;

        string word;
        cin >> word;
        for (char ch : word)
            cnt[ch]++;

        
        // for (auto [x , y] : cnt) {
        //     cout << x << " -> " << y << '\n';
        // }
        // cout << '\n';

    
        priority_queue<int, vector<int>, compare> pq;
        for (auto [x, y] : cnt) {
            pq.push(y);
        }

        // while(!pq.empty()) {
        //     cout << pq.top() << '\n';
        //     pq.pop();
        // }
     
        while (x > 0 && pq.size() > 1) {
            int y = pq.top();
            pq.pop();
           
            if (x > 0) {
                y--;
                x--;
                if (y > 0) {
                    pq.push(y);
                }
            }
        }

        vector <int> finalcharcnt;
        int oddcount = 0, evencount = 0;
        while (!pq.empty()) {
            // cout << pq.top() << '\n';
            finalcharcnt.push_back(pq.top());
            pq.pop();
        }
        
        for(int i=0; i<finalcharcnt.size(); i++) {
            if(finalcharcnt[i] %2 == 0)    evencount++;
            else    oddcount++;
        }
        
        //cout << evencount << " " << oddcount;
        
        if(oddcount > 1) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}
