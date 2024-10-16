#include "functions.h"

static int arr[] = {10,7,8,9,1,5};

/*  pivottan küçük olan elemanları arrayin soluna alıyor, pivottan küçük eleman kalmadığında ise
    pivotu arr[i] ile swap ediyor(yani, pivotu kendinden büyük olan eleman ile swap ediyor).
    i+1 dönüyor.*/
int part(int low, int high) {

    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < arr[high]) {// pivotumuz array[high]
            i++;//pivottan küçük eleman bulduğunda indexi bir sağa kaydırıyor
            swap( & arr[i], & arr[j]);//bulunan eleman ile indeksteki elemanı swap ediyor. (pivotu değil!)
        }
    }

    swap( & arr[i + 1], & arr[high]);//pivottaki elemanı kendinden küçük son elemanın bir sağına atıyor.
    return i + 1;//pivotun atandığı array indeksini dönüyor
}
void quickSort(int low, int high) {
    if (low < high) {

        int pi = part(low, high);

        quickSort(low, pi - 1);//önce low'dan pivot-1'e kadar sıralama yapıyor.
        quickSort(pi + 1, high);//sonra pivot+1'den high'a kadar.
    }
}
int main() {

    printf("quickSort \n\n");

    printf("Given array is \n");
    printArray(arr, ARSZ(arr));

    quickSort(0, ARSZ(arr) - 1);

    printf("\nSorted array is \n");
    printArray(arr,ARSZ(arr));

    return 0;
}