#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    struct Node* parent; //kontrol için kullanışlı
};
void printArray(int A[], int size);

#endif
