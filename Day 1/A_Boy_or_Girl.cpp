#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int l = s.length();
   
    cout << l << endl;


    for(int i=0; i<l; i++)
    {
        for(int j=i+1; j<=l; j++)
        {
            if(s[i] == s[j])
            {
                l--;
            }
        }
    }

    cout << l << endl;
    if(l%2==0)  cout << "CHAT WITH HER!" << endl;
    else    cout << "IGNORE HIM!" << endl;

    return 0;
}