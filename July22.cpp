#Name of the problem: Remove duplicates from an unsorted linked list
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_map<int,int>m;
        Node* temp = head;
        temp = head;
        Node* prev = head;
        while(temp!=NULL){
            m[temp->data]++;
            if(m[temp->data]>1){
                prev->next = temp->next;
                m[temp->data]--;
            }
            else{
                prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};
