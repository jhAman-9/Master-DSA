//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        // Brute Force 
        // T.C = O(r * s.size())
        int Size = s.size();
        while(r--){
            string ans = "";
            for(int i=0; i<s.size(); i++){
                if(s[i] == '1'){
                    ans += "10";
                }
                else{
                    ans += "01";
                }
                // whenever my ans.size  > s.size then break because we need that char which is under the s.size
                // no need to generate string more than s.size because ( n  < s.size)
                if(ans.size() > Size) break;
            }
            s = ans;
        }
        return s[n];
        
        
        // Optimazation Approach
        // T.C = O(r)       S.C.= auxilary space 
        // if(r == 0) return s[n];
        // char c = nthCharacter(s , r-1, n /2);
        // if( n % 2 == 1) {
        //     // right side char 
        //     if( c == '0') return '1';  // next time it produce just opposite of its previous round index
        //     else return '0';
        // }
        
        // else{
        //     // left side char
        //     if( c == '0') return '0';  // next time it also produce same value at left/even index
        //     else return '1';
        // }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends