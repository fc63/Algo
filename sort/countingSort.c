#include "h/functions.h"

static int arr[] = {4,3,12,1,5,5,3,9};

void countingSort() {
    //değişkenler
    int m = 0, i = 0, outArr[ ARSZ(arr) ];
    for (i = 0; i < ARSZ(arr); i++)
        if (arr[i] > m)
            m = arr[i];
    int* countArr = array0(m + 1);

    //fonksiyon kısmı
    for (i = 0; i < ARSZ(arr); i++)
        countArr[arr[i]]++;

    for (i = 1; i <= m; i++)
        countArr[i] += countArr[i - 1];

    for (i = ARSZ(arr) - 1; i >= 0; i--) {
        outArr[countArr[arr[i]] - 1] = arr[i];
        countArr[arr[i]]--;
    }

    for (i = 0; i < ARSZ(arr); i++)
        arr[i] = outArr[i];
}
int cs(){
    printf("countingSort \n\n");

    printf("Given array is \n");
    printArray(arr, ARSZ(arr));

    countingSort();

    printf("\nSorted array is \n");
    printArray(arr,ARSZ(arr));

    return 0;
}