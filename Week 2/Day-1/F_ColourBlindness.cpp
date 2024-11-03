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
        int n = 2; //row
        int m;  //coloum
        cin >> m;
        
        char mat[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> mat[i][j];
            }
        }
        
        bool flag = true;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!((mat[0][j] == 'G' && mat[1][j] == 'B') || 
                (mat[0][j] == 'B' && mat[1][j] == 'G') || 
                (mat[0][j] == mat[1][j])))
                {
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}