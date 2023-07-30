#Name of the problem: Inorder Successor in BST
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(!root || !x){
            return NULL;
        }
        Node *curr = root, *succ = NULL;
        while(curr){
            if(x->data<curr->data){
                succ = curr;
                curr = curr->left;
            }
            else if(x->data>=curr->data){
                curr = curr->right;
            }
        }
        return succ;
    }
};
