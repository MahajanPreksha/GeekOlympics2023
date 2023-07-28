#Name of the problem: Lowest Common Ancestor in a BST
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            int mini = min(n1, n2), maxi = max(n1, n2);
            if(root->data<=maxi && root->data>=mini){
                return root;
            }
            if(root->data>maxi){
                return LCA(root->left, n1, n2);
            }
            if(root->data<mini){
                return LCA(root->right, n1, n2);
            }
        }
};
