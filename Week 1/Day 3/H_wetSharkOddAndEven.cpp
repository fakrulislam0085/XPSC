#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    vector <ll> evenVec;
    vector <ll> oddVec;
    ll mx = 0;
    ll mx1 = 0;
    ll mx2 = 0;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
            evenVec.push_back(a[i]);
        else if(a[i]%2 != 0)
            oddVec.push_back(a[i]);
    }

    //sorting the vectors
    if(!evenVec.empty())
        sort(evenVec.begin(), evenVec.end());
    if(!oddVec.empty())
        sort(oddVec.begin(), oddVec.end());

    
    //when all values are even
    if(oddVec.empty())
    {
        //1 even value
        if(n==1)
            mx = evenVec[0];

        //even number or odd number values
        else if(n%2 == 0 || n%2 != 0)
        {
            for(ll val : evenVec)
                mx += val;
        }
    }

    
    //when all values are odd
    if(evenVec.empty())
    {
        //1 odd value
        if(n==1)
            mx = 0;
            
        //odd number values
        else if(n%2!=0)
        {
            for(ll val : oddVec)
            {
                mx1 += val;
                mx = mx1 - oddVec[0];
            }
        }
            
        //even number values
        else if(n%2 == 0)
        {
            for(ll val : oddVec)
                mx += val;
        }
    }


    //When even and odd values together
    if(!evenVec.empty() && !oddVec.empty())
    {
        //sum of all values of even vector
        for(ll val : evenVec)
            mx1 += val;

        //maximum sum of odd values
        //even number odd values sum
        int a = oddVec.size();
        if(a%2 == 0)
        {
            for(ll val : oddVec)
                mx2 += val;
        }
        //odd number odd values sum
        if(a%2 != 0)
        {
            //remove the lowest value
            oddVec.erase(oddVec.begin());
            for(ll val : oddVec)
                mx2 += val;
        }

        //total sum
        mx = mx1 + mx2;
    }
    cout << mx << endl;
    
    return 0;
}