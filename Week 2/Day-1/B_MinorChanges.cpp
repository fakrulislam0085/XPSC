#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    string s;
    cin >> s;
    string t;
    cin >> t;
    ll count = 0;
    
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i] != t[i])
        {
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}