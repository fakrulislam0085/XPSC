#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int cardNumber[n];
    for(int i=0; i<n; i++)
    {
        cin >> cardNumber[i];
    }
    ll sereja_score = 0;
    ll dima_score = 0;
    bool sereja_turn = true;
    
    int i = 0;
    int j = n-1;
   
    while(i<=j)
    {
       if(cardNumber[i] >= cardNumber[j])
       {
            if(sereja_turn)
            {
                sereja_score += cardNumber[i];
            }
            else
            {
                dima_score += cardNumber[i];
            }
            i++;   //if cardNumber[i] has been taken
       }
      
       
       else 
       {
            if(sereja_turn)
            {
                sereja_score += cardNumber[j];
            }
            else
            {
                dima_score += cardNumber[j];
            }
            j--;  //if cardNumber[j] has been taken
       }
       
       //alternate their turn
       sereja_turn = !sereja_turn;
    }

    cout << sereja_score << " " << dima_score << '\n';
}
