#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definição do nó da árvore binária
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Função auxiliar para criar um novo nó
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Funções fornecidas
bool check(struct TreeNode* p1, struct TreeNode* p2) {
    if (p1 == NULL && p2 == NULL)
        return true;
    if (p1 == NULL || p2 == NULL)
        return false;
    return (p1->val == p2->val) && check(p1->left, p2->right) &&
           check(p1->right, p2->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL)
        return true;
    return check(root->left, root->right);
}

// Libera memória da árvore
void freeTree(struct TreeNode* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Função main para testar
int main() {
    // Exemplo de árvore simétrica:
    //        1
    //      /   \
    //     2     2
    //    / \   / \
    //   3  4  4   3

    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);

    if (isSymmetric(root))
        printf("A árvore é simétrica.\n");
    else
        printf("A árvore não é simétrica.\n");

    freeTree(root); // Libera memória

    return 0;
}
