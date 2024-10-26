#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;
    for(int i=1; i<=100; i++)
    {
        if(i>=a && i<=b)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}