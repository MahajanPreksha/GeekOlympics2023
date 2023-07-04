#Name of the problem: Count the subarrays having product less than k
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i = 0, res = 0, product = 1;
        for(int l=0; l<n; l++){
            product *=a[l];
            while(product>=k && i<n){
                product /=a[i++];
            }
            if(product<k){
                res +=l - i + 1;
            }
        }
        return res;
    }
};
