#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int l = s.length();
    int count = 0;
    
    //if s is empty
    if(l==0)
        cout << 'a' << '\n';
        
    else 
    {
        bool flag0 = false;
        bool flag = false;
        bool flag1 = false;
        for(int i=0; i<l-1; i++)
        {
            //if front letters are smallest
            if(s[0] != 97)
            {
                count = s[0]-1;
                flag0 = true;
                break;
            }

            //if middle letters are smallest
            else if(s[0] == 97)
            {
                if(s[i] != s[i+1] && s[i+1] >= s[i]+2)
                {
                    count = s[i]+1;
                    flag = true;
                    break;
                }

                //if last letter is smallest
                else if(s[i] == s[i+1] || s[i+1] == s[i]+1)
                {
                    count = s[i+1];
                    
                    /*corner case: If the last char of the string is 'z', our output will be none*/
                    if(i == l-2 && count == 122)
                    {
                        cout << "None";
                        return 0;
                    }
                    else if(count < 122)
                    {
                        flag1 = true;
                    }
                }
            }
            
        }

        if(flag0) {
             char ch = count;
            cout << ch << '\n';
        }
        else if(flag){
            char ch = count;
            cout << ch << '\n';
        }
        else if(flag1) {
            char ch = count + 1;
            cout << ch << '\n';
        }
    }
    


    return 0;
}