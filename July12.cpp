#Name of the problem: Power of Numbers
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        long MOD = 1000000007;
        if(R==0){
            return 1;
        }
        long ans = 1;
        long temp = power(N, R/2);
        if(R%2==0){
            ans = (temp%MOD * temp%MOD) % MOD;
        }
        else{
            ans = (N%MOD * temp%MOD * temp%MOD) % MOD;
        }
        return ans;
    }

};
