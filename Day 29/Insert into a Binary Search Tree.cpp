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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* nodeToInsert=new TreeNode(val);
        if(root==NULL){
            return nodeToInsert;
        }
        else if(nodeToInsert->val >root->val){
            root->right=insertIntoBST(root->right,val);
        }
        else{
            root->left=insertIntoBST(root->left,val);
        }
        return root;
    }
};
