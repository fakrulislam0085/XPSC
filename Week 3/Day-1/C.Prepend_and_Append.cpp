#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n-1, size = n;
        while(l < r) {
            if(s[l] == s[r]) {
                break;
            }
            else if(s[l] == '1' && s[r] == '0'){
                l++;
                r--;
                size -= 2;
            }
            else if(s[l] == '0' && s[r] == '1') {
                l++;
                r--;
                size -= 2;
            }
        }
        cout << size << '\n';
        

    }
    return 0;
}