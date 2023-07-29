#Name of the problem: Median of BST
float findMedian(struct Node *root)
{
    multiset<int> ms;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        ms.insert(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    int x = ms.size();
    int n = x/2;
    vector<int> a;
    for(auto it:ms){
        a.push_back(it);
    }
    if(x%2==0){
        return (double)(a[x/2-1] + a[x/2])/2;
    }
    else{
        return a[x/2];
    }
}
