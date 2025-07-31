#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Definição da estrutura Node
struct Node {
    int val;
    int numChildren;
    struct Node** children;
};

// Protótipo da função que calcula a profundidade
int maxDepth(struct Node* root);

// Função auxiliar para criar um nó
struct Node* createNode(int val, int numChildren) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->val = val;
    node->numChildren = numChildren;
    if (numChildren > 0) {
        node->children = (struct Node**)malloc(numChildren * sizeof(struct Node*));
    } else {
        node->children = NULL;
    }
    return node;
}

// Função principal
int main() {
    /*
        Árvore de exemplo:
                1
              / | \
             2  3  4
                   |
                   5

        Profundidade esperada: 3
    */

    struct Node* root = createNode(1, 3);
    root->children[0] = createNode(2, 0);
    root->children[1] = createNode(3, 0);
    root->children[2] = createNode(4, 1);
    root->children[2]->children[0] = createNode(5, 0);

    int depth = maxDepth(root);
    printf("Profundidade máxima da árvore: %d\n", depth);

    return 0;
}

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root) {
    if(root == NULL)
        return 0;
    int count = 1;
    
    for(int i = 0; i < root->numChildren; i++){
    count = fmax(count, maxDepth(root->children[i]) + 1);
    }
    return count;
}