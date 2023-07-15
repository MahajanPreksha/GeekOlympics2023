#Name of the problem: Delete middle element of a stack
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        vector<int>store;
        int n = (sizeOfStack)/2;
        while(n--){
            store.push_back(s.top());
            s.pop();
        }
        s.pop(); 
        for(int i=store.size()-1; i>=0; i--){
            s.push(store[i]);
        } 
    }
}
