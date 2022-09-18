class Solution {
public:
    int closestValue(TreeNode* root, double target) {
        int ans=(root->val);
        TreeNode* node=root;
        
        while(node!=NULL){
            double nodeVal=node->val;

            if(nodeVal==target){
                ans=nodeVal;
                break;
            }
            
            ans=(abs(target-nodeVal)<abs(target-ans)?nodeVal:ans);
            node=(target<nodeVal)?(node->left):(node->right);
        }
        
        return ans;
    }
};
