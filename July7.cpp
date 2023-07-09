#Name of the problem: Merge Without Extra Space
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long int merged[n + m];
            for (int i=0; i<n; i++){
                merged[i] = arr1[i];
            }
            for (int i=0; i<m; i++){
                merged[n+i] = arr2[i];
            }
            sort(merged, merged+n+m);
            for (int i=0; i<n; i++){
                arr1[i] = merged[i];
            }
            for (int i=0; i<m; i++){
                arr2[i] = merged[n+i];
            }
        } 
};
