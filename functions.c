#include <stdio.h>

void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

//Binary Tree için Node oluşturma fonksiyonu
struct BiNode* newBiNode(int data, struct BiNode* parent) {
    struct BiNode* BiNode = malloc(sizeof(struct BiNode));
    BiNode->data = data;
    BiNode->left = NULL;
    BiNode->right = NULL;
    BiNode->parent = parent;
    return BiNode;
}
