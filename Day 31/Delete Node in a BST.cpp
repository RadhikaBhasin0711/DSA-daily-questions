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

TreeNode* minValue(TreeNode* root){
    TreeNode* temp=root;
    while(temp->left!=NULL){              
        temp=temp->left;
    }
    return temp;
}
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }

        if(root->val==key){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //1 child
            //left is present
            if(root->left!=NULL && root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }

            //right child is present
            if(root->left==NULL && root->right!=NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }

            //2 child
            if(root->left!=NULL && root->right!=NULL){
                int mini=minValue(root->right)->val;            
                root->val=min;                                  
                root->right=deleteNode(root->right, min);       
                return root;
            }
        }

        else if(root->val>key){
            //go to left prt
            root->left=deleteNode(root->left,key);
            return root;
        }
        else{
            //go to left prt
            root->right=deleteNode(root->right,key);
            return root;
        }
        return root;
    }
};
