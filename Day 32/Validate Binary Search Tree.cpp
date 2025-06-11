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
private:
    bool isValid(TreeNode* root,long long min, long long max){
        if(root==NULL){
            return true;
        }

        if(root->val>min && root->val<max){
            bool left=isValid(root->left,min,root->val);
            bool right=isValid(root->right,root->val,max);
            return left && right;
        }

        else{
            return false;
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root,LONG_MIN,LONG_MAX);    
    }
};
