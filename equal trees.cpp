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
    vector<int> v;
    void inorderTraversal(TreeNode* root){
        if(root!=nullptr){
            inorderTraversal(root->left);
            v.push_back(root->val);
            inorderTraversal(root->right);
        }
        v.push_back(0);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        inorderTraversal(p);
        vector<int> v1=v;
        v.clear();
        inorderTraversal(q);
        for(auto x:v){
            cout<<x<<" ";
        }
        if(v1==v){
            return true;
        }
        else{
            return false;
        }
    }
};
