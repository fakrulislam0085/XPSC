#second solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque <int> dq(n);
    for(int i=0; i<n; i++)
    {
        cin >> dq[i];
    }

    int ans1 = 0;
    int ans2 = 0;
    int who = 1;    //bool who = true

    while(!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left, right);

        if(who%2 != 0)
            ans1 += mx;
        else
            ans2 += mx;


        //mx value = left hole left pop korbo, odtherwise right pop korbo
        if(mx == left) 
            dq.pop_front();
        else
            dq.pop_back();


        //increase who value in every turn
        who++;
    }

    cout << ans1 << " " << ans2 << '\n';
    return 0;
}
