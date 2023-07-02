#Name of the problem: Copy Set Bits in Range
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        for(int i=l; i<=r; i++){
            x = x|(1<<(i-1)&y);
        }
        return x;
    }
};
