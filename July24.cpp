#Name of the problem: Right View of Binary Tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int hd = it.second;
            Node* node = it.first;
            mp[hd] = node->data;
            if(node->left){
                q.push({node->left,hd+1});
            }
            if(node->right){
                q.push({node->right,hd+1});
            }
        }
        vector<int> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
