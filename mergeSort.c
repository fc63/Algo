#include "functions.h"

static int arr[] = {12,11,13,5,6,7};

void merge(int left, int mid, int right) {
    int i, j, k=left; //k target array indexi
    int n1 = mid - left + 1; //left ve mid arasındaki eleman sayısı (left ve mid dahil)
    int n2 = right - mid; //mid+1 ile right arasındaki eleman sayısı (mid+1 ve right dahil)
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i]; //left'den başlayıp mid'e kadar atama yapıyor
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];//mid + 1'den başlayıp right'a kadar atama yapıyor.
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
        i++; k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}
void mergeSort(int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort( left, mid);
        mergeSort( mid + 1, right);
        merge(left, mid, right);
    }
}
int ms() {

    printf("mergeSort \n\n");

    printf("Given array is \n");
    printArray(arr,ARSZ(arr));

    mergeSort(0, ARSZ(arr) - 1);

    printf("\nSorted array is \n");
    printArray(arr,ARSZ(arr));

    return 0;
}