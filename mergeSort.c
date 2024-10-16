#include "functions.h"

void merge(int arr[], int l, int m, int r) {
    int i, j, k=l; //k target array indexi
    int n1 = m - l + 1; //left ve mid arasındaki eleman sayısı (left ve mid dahil)
    int n2 = r - m; //mid+1 ile right arasındaki eleman sayısı (mid+1 ve right dahil)
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i]; //left'den başlayıp mid'e kadar atama yapıyor
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];//mid + 1'den başlayıp right'a kadar atama yapıyor.
    i = 0; //left indexi
    j = 0; //right indexi
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main3() {
    int arr[] = {12,11,13,5,6,7};
    printf("Given array is \n");
    printArray(arr, ARRAY_SIZE(arr));
    mergeSort(arr, 0, ARRAY_SIZE(arr) - 1);
    printf("\nSorted array is \n");
    printArray(arr, ARRAY_SIZE(arr));
    return 0;
}