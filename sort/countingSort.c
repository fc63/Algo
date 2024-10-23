#include "h/functions.h"

static int arr[] = {4,3,12,1,5,5,3,9};

void countingSort() {
    //değişkenler
    int max = maxarr(arr, ARSZ(arr)), i = 0;
    int min = minarr(arr, ARSZ(arr)), n_arr[ARSZ(arr)];
    int * pos = array0(max + 1 - min);

    //fonksiyon kısmı
    for (i = 0; i < ARSZ(arr); i++)
        pos[arr[i] - min]++; // her value'dan kaç adet olduğunu ilgili pozisyona yazdı.

    for (i = 1; i <= max; i++)
        pos[i] += pos[i - 1]; //kümülatif toplamayla pozisyonlarını belirledi

    for (i = ARSZ(arr) - 1; i >= 0; i--) //i array indeksi: array'in en sondaki elamanın indeksinden 0'a kadar döngüde.
        n_arr[pos[arr[i] - min]-- - 1] = arr[i]; //pozisyonlara atama yapıyor ve her atama sırasında ilgili pozisyonun pos arrayindeki değerini 1 eksiltiyor
    //

    //bellek yönetimi
    free(pos);

    //return output
    for (i = 0; i < ARSZ(arr); i++)
        arr[i] = n_arr[i];
}
int cs() {
    printf("countingSort \n\n");

    printf("Given array is \n");
    printArray(arr, ARSZ(arr));

    countingSort();

    printf("\nSorted array is \n");
    printArray(arr, ARSZ(arr));

    return 0;
}