#Name of the problem: Number of 1 Bits
class Solution {
  public:
    int setBits(int N) {
        int res = 0;
        while(N>0){
            int rem = N%2;
            res +=rem;
            N/=2;
        }
        return res;
    }
};
