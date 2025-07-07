/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int count = 0;
    if (root == NULL)
        return count;

    count = maxDepth(root->left);
    int temp = count;
    count = maxDepth(root->right);

    if (count > temp) {
        count++;
        return count;
    } else
        temp++;
    return temp;
}