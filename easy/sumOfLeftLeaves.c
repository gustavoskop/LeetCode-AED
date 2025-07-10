/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum(struct TreeNode* root, int flag) {
    int count = 0;

    if (root == NULL)
        return 0;

    if (flag == 1 && root->left == NULL && root->right == NULL)
        return root->val;
    else if (flag != 1 && root->left == NULL && root->right == NULL)
        return 0;

    count += sum(root->left, 1);
    count += sum(root->right, 0);

    return count;
}

int sumOfLeftLeaves(struct TreeNode* root) {
    int count = 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    count += sum(root->left, 1);
    count += sum(root->right, 0);

    return count;
}