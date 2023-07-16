#Name of the problem: Queue Reversal
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int>s;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            s.push(x);
        }
        while(!s.empty()){
            int y=s.top();
            s.pop();
            q.push(y);
        }
            return q;
    }
};
