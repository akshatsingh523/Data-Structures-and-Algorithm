class Solution {
public:
    vector<int> v;

    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        if(root->left == nullptr && root->right == nullptr){
            v.push_back(root->val);
        }
        inorder(root->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        vector<int> v1 = v;
        v.clear();
        inorder(root2);
        
        if(v1.size() != v.size()) {
            return false;
        }

        for(int i = 0; i < v.size(); i++) {
            if(v[i] != v1[i]) {
                return false;
            }
        }

        return true;
    }
};
