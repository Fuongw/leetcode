class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
     if (p!= NULL && q==NULL){
        return false;
     }if (p==NULL && q==NULL){
        return true;
     }if (q!=NULL && p==NULL){
        return false;
     }if (q->val != p->val){
        return false;
     }return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
