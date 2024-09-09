/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void traverse(struct TreeNode* root, int * returnSize, int * ret){
    if(root==NULL){
        return;
    }
    traverse(root->left, returnSize, ret);
    *returnSize = *returnSize+1;
    ret[*returnSize]=root->val;
    traverse(root->right, returnSize, ret);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=-1;
    int * ret = (int*)malloc(100*sizeof(int));
    traverse(root, returnSize, ret);
    *returnSize=*returnSize+1;
    return ret;
}
