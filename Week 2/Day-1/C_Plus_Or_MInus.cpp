#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        ll sum = a+b;
        ll diff = a-b;
        
        if(sum == c)
        {
            cout << "+" << '\n';
        }
        else if(diff == c)
        {
            cout << "-" << '\n';
        }
    }
    
    return 0;
}