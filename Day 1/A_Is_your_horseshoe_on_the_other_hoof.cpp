#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0; i<4; i++)
    {
        cin >> a[i];
    }

    set <int> mySet(a, a + 4);

    // for(int val : mySet)
    // {
    //     cout << val << " ";
    // }
    int sz = mySet.size();

    cout << 4-sz << endl;
    return 0;
}