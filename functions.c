#include "functions.h"

#include <stdio.h>
#include <stdlib.h>

void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

//Binary Tree için Node oluşturma fonksiyonu
struct BiNode* newBiNode(int data, struct BiNode* parent) {
    struct BiNode* BiNode = (struct Node*)malloc(sizeof(struct BiNode));
    BiNode->data = data;
    BiNode->left = NULL;
    BiNode->right = NULL;
    BiNode->parent = parent;
    return BiNode;
}

//Binary Tree'yi in-order gezen fonksiyon
void inorderTraversal(struct BiNode* node) {
    if (node == NULL) return;
    inorderTraversal(node->left);
    printf("%d ", node->data);
    inorderTraversal(node->right);
}