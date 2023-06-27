// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     map<int,int> m;
//     void rootnode(TreeNode* root,int depth){
//         if(root==nullptr){
//             return;
//         }
//         if(root->left==root->right){
//             m[depth]+=root->val;
//             depth=0;
//         }
//         depth++;
//         rootnode(root->left,depth);
//         rootnode(root->right,depth);
//     }
//     int deepestLeavesSum(TreeNode* root) {
//         int ans=0;
//         int depth=0;
//         rootnode(root,depth);
        
//         return ans;
//     }
// };

class Solution {
public:
    map<int, int> m;

    void rootnode(TreeNode* root, int depth) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            m[depth] += root->val;
        }
        rootnode(root->left, depth+1);
        rootnode(root->right, depth+1);
    }

    int deepestLeavesSum(TreeNode* root) {
        int depth = 0;
        rootnode(root, depth);

        int ans = 0;
        for (auto x : m) {
            ans = x.second;
        }

        return ans;
    }
};
