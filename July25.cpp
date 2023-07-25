#Name of the problem: Level order traversal in spiral form
vector<int> findSpiral(Node *root)
{
    deque<Node*> q;
    vector<int> ans;
    bool flag = true;
    q.push_front(root);
    while (!q.empty()){
        int size = q.size();
        while(size--){
            if(flag){
                Node *node = q.front();
                q.pop_front();
                ans.push_back(node->data);
                if(node->right){
                    q.push_back(node->right);
                }
                if(node-> left){
                    q.push_back(node->left);
                }
            }
            else{
                Node *node = q.back();
                q.pop_back();
                ans.push_back(node->data);
                if(node->left){
                    q.push_front(node->left);
                }
                if(node->right){
                    q.push_front(node->right);
                }
            }
        }
        size = q.size();
        flag = !flag;
    }
    return ans;
}
