/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int high=max(p->val,q->val);
        int low=min(p->val,q->val);
        while(root!=NULL){
            if(high < root->val){
                root=root->left;
            }
            else if(low > root->val){
                root=root->right;
            }
            else{
                return root;            //one node is in left subtree and another in right
            }
        }
        return NULL;
    }
};
