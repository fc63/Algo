#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct BiNode {
    int data;
    struct BiNode* left;
    struct BiNode* right;
    struct BiNode* parent; //kontrol için kullanışlı
};
struct BiNode* newBiNode(int data, struct BiNode* parent);
void printArray(int A[], int size);
void inorderTraversal(struct BiNode* node);

#endif