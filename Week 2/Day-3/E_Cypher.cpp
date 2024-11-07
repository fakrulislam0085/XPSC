#include <bits/stdc++.h>
using namespace std;

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> finalResult, initialResult;
        deque< pair<int, string>> move;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            finalResult.push_back(x);
        }
        
        for(int i=0; i<n; i++) {
            int step; cin >> step;
            string sequence; cin >> sequence;
            
            for(int j=0; j<step; j++) {
                //sequence[j] == D / U 
                //D== +1, U == -1 to get initialResult
                //D == 9 -> 0, U== 0->9
                
                if(sequence[j] == 'D') {
                    if(finalResult[i] == 9) {
                        finalResult[i] = 0;
                    }
                    else {
                        finalResult[i]++;
                    }
                }
                else if(sequence[j] == 'U') {
                    if(finalResult[i] == 0) {
                        finalResult[i] = 9;
                    }
                    else {
                        finalResult[i]--;
                    }
                }
            }
            initialResult.push_back(finalResult[i]);
        }
        
        
        for(int val : initialResult) {
            cout << val << " ";
        }
        cout << '\n';
       
    }
}
