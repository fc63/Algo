#include "functions.h"

int main() {
    int i=0,j=0;
    printf("1. Sort\n2. Btr\n\nYour choice:");
    scanf("%d",&i);
    switch(i) {
        case 1:
        printf("1. Bubble Sort\n2. Insertion Sort\n3. Merge Sort\n4. Quick Sort\n5. Heap Sort\n\nYour choice:");
        scanf("%d",&j);
        printf("\n");
        switch(j) {
            case 1:
                bs();
            break;
            case 2:
                is();
            break;
            case 3:
                ms();
            break;
            case 4:
                qs();
            break;
            case 5:
                hs();
            break;
        }
        break;
        case 2:
            bt();
        break;
    }
    return 0;
}