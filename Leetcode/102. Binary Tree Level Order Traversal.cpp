// solving it using BFS algorithm.
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> myQueue;
        vector<vector<int>> out; 
        myQueue.push(make_pair(root,0));
        while(!myQueue.empty() && root) {
            pair<TreeNode*,int> element = myQueue.front();
            myQueue.pop();
            TreeNode *node = element.first;
            int depth = element.second;
            if(depth == out.size()) {
                out.push_back({});
            }
            out[depth].push_back(node->val);
            if(node->left != nullptr) {
                myQueue.push(make_pair(node->left,depth+1));
            }
            if(node->right != nullptr) {
                myQueue.push(make_pair(node->right,depth+1));
            }
        }
        return out;
    }
};