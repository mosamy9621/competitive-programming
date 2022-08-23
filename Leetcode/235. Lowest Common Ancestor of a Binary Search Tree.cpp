class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {     
        while(root) {
            if(root->val > p->val && root->val > q->val) {
                root=root->left;
            }
            else if(root->val < p->val && root->val < q->val) {
                root=root->right;
            }
            else break;
        }  
        return root;

    }
};

// ************************ Another solution using hash map ************************

// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         TreeNode *answer,*ptr;
//         unordered_map<TreeNode *, int> visited;
//         ptr=root;
//         int maxVisits = -1;
//         while(ptr){
//             if(visited.find(ptr)==visited.end()){
//                 visited[ptr]=0;
//             }
//             visited[ptr]++;
//             if(ptr->val>p->val){
//                 ptr=ptr->left;
//             }else if(ptr->val < p->val) {
//                 ptr=ptr->right;
//             } else {
//                 break;
//             }
//         }
//         ptr=root;
//          while(ptr){
//             if(visited.find(ptr)==visited.end()){
//                 visited[ptr]=0;
//             }
//             visited[ptr]++;
//              if(maxVisits<=visited[ptr]) {
//                  maxVisits=visited[ptr];
//                  answer = ptr;
//              }
//             if(ptr->val>q->val){
//                 ptr=ptr->left;
//             }else if(ptr->val < q->val) {
//                 ptr=ptr->right;
//             } else {
//                 break;
//             }
//         }
        
//         return answer;
//     }
// };