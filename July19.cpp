#Name of the problem: Longest Palindromic Subsequence
class Solution{
  public:
    int longestPalinSubseq(string A) {
        int n = A.length();
        string a = A;
        reverse(a.begin(), a.end());
        vector<int> curr(n+1, 0);
        vector<int> next(n+1, 0);
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int ans = 0;
                if(a[i] == A[j]){
                    ans = 1 + next[j+1];
                }
                else{
                    ans = max(next[j], curr[j+1]);
                }
                curr[j] = ans;
            }
            next = curr;
        }
        return next[0];
    }
};
