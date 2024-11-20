//problem link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
class Solution {
    public:
    long long maximumSumSubarray(vector <int> &arr, int k) {
        int n = arr.size(), left = 0, right = 0;
        long long int ans = 0, sum = 0;
        
        while(right < n) {
            sum += arr[right];
            
            if(right - left + 1 == k) {
                ans = max(ans, sum);
                sum -= arr[left];
                left++, right++;
            }
            else {
                right++;
            }
        }
        return ans;
    }
};
int main()
{
    iOS
    vector <int> arr;
    int x;
    while(cin >> x) {
        arr.push_back(x);
        if(cin.peek() == '\n') break; // Stop reading array when a newline is encountered
    }
    int k; cin >> k;

    Solution sol;   //create an instance of solution class
    cout << sol.maximumSumSubarray(arr, k) << nl;   //call the function and print the result
    return 0;
}