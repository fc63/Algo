#include "h/functions.h"

static int arr[] = {4,3,12,1,5,5,3,9};

void countingSort(){
    int m = 0, i = 0;
    int * outArr = malloc(ARSZ(arr) * sizeof(int));
    for (i = 0; i < ARSZ(arr); i++)
        if (arr[i] > m)
            m = arr[i];
    int * countArr = calloc(m + 1, sizeof(int));

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

    free(countArr);
    free(outArr);
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