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
        for(int i=0; i<s.size()-1; i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i] == s[j])
                {
                    posToInsert = j;
                    break;
                }
            }
            if (posToInsert != -1) break; 
        }
        
        if(posToInsert == -1)
        {
            char charToInsert = ' ';
            for(char c='a'; c<='z'; c++)
            {
                if(c != s[s.size()])
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