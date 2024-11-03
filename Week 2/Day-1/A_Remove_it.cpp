#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    deque <int> result;
    for(int i=0; i<n; i++)
    {
        if(v[i] != x)
        {
            result.push_back(v[i]);
        }
    }
    
    
    if(result.size() == 0)
    {
        cout << '\n';
    }
    else
    {
        for(auto val : result)
        {
            cout << val << " ";
        }
    }
   
    
    return 0;
}