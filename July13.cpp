class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        sort(arr, arr+n);
        vector<int> v;
        int count = 1; 
        for(int i=1; i<n; i++){
            if(arr[i]==arr[i-1]){
                count++;
            }
            else{
                v.push_back(count);
                count = 1;
            }
        }
        v.push_back(count);
        sort(v.begin(), v.end());
        for(int i=1; i<v.size(); i++) {
            if(v[i]==v[i-1]){
                return false;
            }
        }
        return true;
    }
};
