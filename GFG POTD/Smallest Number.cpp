//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++


class Solution {
  public:
    string smallestNumber(int s, int d) {
      if(d == 1 and s > 9) return "-1";
      if(9*d < s) return "-1";
       
      string ans = "";
      s = s - 1;
       
      while(d > 0){
          if(s > 9) {
              ans = "9" + ans;
              s = s-9;
          }
           
          else if(s <= 9 and d > 1){
              ans = to_string(s) + ans;
              s = 0;
          }
           
          else {
              ans = to_string(s+1) + ans;
          }
          d--;
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends