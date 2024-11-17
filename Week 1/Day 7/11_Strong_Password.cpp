#Educational Codeforces Round 168 (Rated for Div. 2)
#Problem:1997A - Strong Password
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        
        string s;
        cin >> s;
        
        if(s.size() == 1)
        {
            char charToInsert = ' ';
            for(char c='a'; c<='z'; c++)
            {
                if(c != s[0])
                {
                    charToInsert = c;
                    break;
                }
            }
            s.insert(1, 1, charToInsert);
            cout << s << '\n';
        }
        else
        {
            int posToInsert = -1;
            bool hasDuplicate = false;
            for(int i=1; i<s.size()-1; i++)
            {
                 if(s[i] == s[i-1])
                    {
                        posToInsert = i;
                        hasDuplicate = true;
                        break;
                    }
                }
                if(hasDuplicate)
                    break;
            }
        
            if(!hasDuplicate)
            {
                char charToInsert = ' ';
                for(char c='a'; c<='z'; c++)
                {
                    if(c != s[s.size()-1])
                    {
                        charToInsert = c;
                        break;
                    }
                }
                s.insert(s.size(), 1, charToInsert);
                cout << s << '\n';
            }
            else
            {
                char charToInsert = ' ';
                for(char c='a'; c<='z'; c++)
                {
                    if(c != s[posToInsert])
                    {
                        charToInsert = c;
                        break;
                    }
                }
                s.insert(posToInsert, 1, charToInsert);
                cout << s << '\n';
            }
        }
    }
    return 0;
}
