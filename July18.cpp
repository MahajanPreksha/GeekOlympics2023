#Name of the problem: Longest Repeating Subsequence
class Solution {
	public:
	    int maxSub(int i, int j, int n, string& s, vector<vector<int>>& dp){
            if(i==n || j==n){
                return 0;
            }
            if(dp[i][j]!=-1){
                return dp[i][j];
            }
            if(i!=j && s[i]==s[j]){
                dp[i][j] = 1 + maxSub(i + 1, j + 1, n, s, dp);
            }
            else{
                dp[i][j] = maxSub(i, j+1, n, s, dp);
                dp[i][j] = max(dp[i][j], maxSub(i+1, j, n, s, dp));
            }
            return dp[i][j];
        }
		int LongestRepeatingSubsequence(string str){
		    int n = str.size();
		    vector<vector<int>> dp(n, vector<int>(n, -1));
            return maxSub(0, 0, n, str, dp);
		}

};
