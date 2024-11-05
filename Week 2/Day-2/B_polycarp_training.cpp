/*1165B - polycarp Training, round 560, div 3. */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    ll n;
    cin >> n;
    multiset <ll> ml;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        ml.insert(x);
    }
    
    ll day = 0, problems = 1;
    while(!ml.empty())
    {
        auto LB = ml.lower_bound(problems);
        if(LB != ml.end())
        {
            day++;
            ml.erase(LB);
        }
        else
        {
            break;
        }
        problems++;
    }
    cout << day << '\n';
    
    return 0;
}
