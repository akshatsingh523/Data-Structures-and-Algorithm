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
    unordered_map<TreeNode*,TreeNode*> parent;
    void preorder(TreeNode* curr,TreeNode* par){
        if(!curr) return;
        parent[curr]=par;
        preorder(curr->left,curr);
        preorder(curr->right,curr);
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        preorder(root,NULL);
        queue<TreeNode*> q;
        q.push(target);
        unordered_set<TreeNode*> visited;
        while(!q.empty() && k){
            k-=1;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                visited.insert(curr);
                if(curr->left && visited.find(curr->left)==visited.end()){
                    q.push(curr->left);
                }
                if(curr->right && visited.find(curr->right)==visited.end()){
                    q.push(curr->right);
                }
                if(parent[curr] && visited.find(parent[curr])==visited.end()){
                    q.push(parent[curr]);
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            ans.push_back(curr->val);
        }
        return ans;
    }
};
