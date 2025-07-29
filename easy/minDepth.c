/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int minDepth(struct TreeNode* root) {
    int count = 0;
    if (root == NULL)
        return count;

    count = minDepth(root->left);
    int temp = count;
    count = minDepth(root->right);

    if (count == 0) {
        temp++;
        return temp;
    } else if (temp == 0) {
        count++;
        return count;
    }

    if (count < temp) {
        count++;
        return count;
    } else
        temp++;
        return temp;
}