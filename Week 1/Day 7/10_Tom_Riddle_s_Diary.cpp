#Manthan, Codefest 17
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <string> v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    deque <string> dq;

    for(int i=0; i<n; i++)
    {
        bool flag = false;
        for(int j=0; j<dq.size(); j++)
        {
            if(dq[j] == v[i])
            {
                flag = true;
            }
        }
        string s2 = v[i];
        dq.push_back(s2);

        if(flag)    cout << "YES" << '\n';
        else    cout << "NO\n";
    }

    return 0;
}
