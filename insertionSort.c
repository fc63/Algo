#include "functions.h"

static int arr[] = {12,11,13,5,6};

void insertionSort(int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int is()
{
    printf("insertionSort \n\n");

    printf("Given array is \n");
    printArray(arr, ARSZ(arr));

    insertionSort(ARSZ(arr));

    printf("\nSorted array is \n");
    printArray(arr,ARSZ(arr));
    return 0;
}