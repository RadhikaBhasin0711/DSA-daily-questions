/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return new TreeNode(head->val);
        }

        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* slow_prev=NULL;

         // Find the middle element (slow pointer)
        while(fast!=NULL && fast->next!=NULL){
            slow_prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        // Create root node from the middle element
        TreeNode* root= new TreeNode(slow->val);

        // Disconnect the left half from the middle
        slow_prev->next=NULL;

        root->left=sortedListToBST(head);
        root->right=sortedListToBST(slow->next);

        return root;
    }
};
