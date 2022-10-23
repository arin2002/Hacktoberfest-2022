void preOrder(struct TreeNode* root, int *arr, int *returnSize){
    if(root!=NULL){
        arr[(*returnSize)++] = root->val;
        preOrder(root->left, arr, returnSize);
        preOrder(root->right, arr, returnSize);
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int * arr = malloc(100*sizeof(int));
    *returnSize = 0;
    preOrder(root, arr, returnSize);
    arr = realloc(arr, (*returnSize)*sizeof(int));
    return arr;
}
