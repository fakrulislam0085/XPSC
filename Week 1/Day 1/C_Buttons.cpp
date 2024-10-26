#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if(a==b)
    {
        cout << a*2 << endl;
    }
    else if(a==b+1 || b==a+1)
    {
        cout << a+b << endl;
    }
    else if(a>b)
    {
        int c = a;
        int d = a-1;
        cout << c+d << endl;
    }
    else if(b>a)
    {
        int c = b;
        int d = b-1;
        cout << c+d << endl;
    }
    return 0;
}