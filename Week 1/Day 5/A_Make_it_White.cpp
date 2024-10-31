#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
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
        int starting_B = -1;
        int ending_B = -1;
        
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                if(starting_B == -1)
                    starting_B = i;
                    
                //update ending_B in every iteration
                ending_B = i;
            }
        }
        
        int diff = ending_B - starting_B;
        cout << diff + 1 << '\n';
    }
    
    return 0;
}
