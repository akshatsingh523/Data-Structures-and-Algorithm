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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        // cout<<root->val<<" ";
        if(root->left!=nullptr){
          if(root->left->left==nullptr && root->left->right==nullptr){
              sum+=root->left->val;
         }
        }
        return sum;
    }
};
