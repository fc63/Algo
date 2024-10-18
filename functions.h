#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ARSZ(arr) (sizeof(arr) / sizeof((arr)[0])) //statik arraylerde çalışır. pointerlarda çalışmaz.

struct BiNode {
    int data;
    struct BiNode* left;
    struct BiNode* right;
    struct BiNode* parent; //kontrol için kullanışlı
};
void printArray(int A[], int size);
struct BiNode* newBiNode(int data, struct BiNode* parent);
void inorderTraversal(struct BiNode* root);
bool isCrossLinked(struct BiNode *root1, struct BiNode *root2);
bool detectCrossLink(struct BiNode* root1, struct BiNode* root2);

void swap(int * a, int * b);

#endif