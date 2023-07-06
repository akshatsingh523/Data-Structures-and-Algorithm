class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        vector<int> sol;
        int ans=-1;
        int lvl=0;
        int maxSum=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            lvl++;
            int size=q.size();
            int temp=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                temp+=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                if(node->left==nullptr && node->right==nullptr){
                    sol.push_back(lvl);
                }
            }
            if(temp>maxSum){
                ans=lvl;
                maxSum=temp;
            }
        }
        sort(sol.begin(),sol.end());
        return sol[0];
    }
};
