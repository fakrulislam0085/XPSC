#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;

    int l = n.length();

    if(l==4)
    {
        cout << n << endl;
    }
    else if(l==3)
    {
        cout <<0 << n << endl;
    }
    else if(l==2)
    {
        cout << 0 << 0 << n << endl;
    }
    else if(l==1)
    {
        cout << 0 << 0 << 0 << n << endl;
    }
    
    return 0;
}