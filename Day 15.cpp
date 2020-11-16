// Range Sum of BST
class Solution {
public:
    int sum=0;
    int inorder(TreeNode* root,int L,int R)
    {
        if(root){
        inorder(root->left,L,R);
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        inorder(root->right,L,R);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        return inorder(root,low,high);
    }
};