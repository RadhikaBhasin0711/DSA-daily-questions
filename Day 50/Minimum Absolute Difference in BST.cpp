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
    void addElement(TreeNode* root,vector<int>& v){
        if(!root) return;

        addElement(root->left,v);
        v.push_back(root->val);
        addElement(root->right,v);
    }
    
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        addElement(root,v);
        int minDiff=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            minDiff=min(minDiff,abs(v[i]-v[i+1]));
        }
        return minDiff;
    }
};
