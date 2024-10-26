#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;
    int mlt = 0;

    for(int i=1; i<=9; i++)
    {
        if(c*i >=a && c*i <= b)
        {
            flag = true;
            mlt = c*i;
            break;
        }
    }

    if(flag)    cout << mlt << endl;
    else    cout << -1 << endl;
    
    return 0;
}