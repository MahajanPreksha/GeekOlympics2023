#Name of the problem: Non Repeating Character
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       vector<int> arr(26, 0);
       for(int i=0; i<S.size(); i++){
           arr[S[i] -'a']++;
       }
       for(int i=0; i<S.size(); i++){
           if(arr[S[i] -'a']==1){
               return S[i];
           }
       }
       return '$';
    }
};
