#Name of the problem: Maximum Index
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        if(n==1){
            return 0;
        }
        vector<int>right_max(n);
        vector<int>left_min(n);
        left_min[0] = arr[0];
        for(int i=1; i<n; i++){
            left_min[i] = min(left_min[i-1], arr[i]);
        }
        right_max[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            right_max[i] = max(right_max[i+1], arr[i]);
        }
        int i = 0, j = 0, max_diff = -1;
        while(j<n && i<n){
            if(left_min[i]<=right_max[j]){
                max_diff = max(max_diff, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return max_diff;
    }
};
