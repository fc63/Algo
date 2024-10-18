#include "functions.h"

static int arr[] = {64,34,25,12,22,11,90};

void bubbleSort(){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int bs() {

    printf("bubbleSort \n\n");

    printf("Given array is \n");
    printArray(arr, ARSZ(arr));

    bubbleSort();

    printf("\nSorted array is \n");
    printArray(arr,ARSZ(arr));

    return 0;
}