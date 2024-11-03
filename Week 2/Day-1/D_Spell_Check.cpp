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
      int n;
      cin >> n;
      string s;
      cin >> s;
      
   
      if(n==5)
      {
            set <char> mySet;
            for(int i=0; i<5; i++)
            {
                if(s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
                {
                    mySet.insert(s[i]);
                }
            }
            
            if(mySet.size() == 5)
                cout << "YES\n";
            else
                cout << "NO\n";
      }
      
      else 
      {
           cout << "NO\n";
      }
    }
    
    return 0;
}