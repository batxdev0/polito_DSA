

#include <stdio.h>
#include <string.h>
    //2 3     3 2


void selectionSort(int A[], int size) {

    int min,indeks;



    for(int sorted = 0; sorted<size; sorted++) {
        min = sorted;
        int temp;
  
        for(int i = sorted; i<size; i++) {
            //find the smallest.
            if(A[min] > A[i]) {
                min = i;
                
            }
        }
        // bunun sonudna elimizde en küçük değer var
        // aktif index ile swapla
        temp = A[min];
        A[min] = A[sorted];
        A[sorted] = temp;


    }


}


int main() {

    int A[] = {2,8,5,3,9,4,1};

    selectionSort(A,7);
    for(int k = 0; k<7; k++) {
        printf("%d\n",A[k]);
    }

    return 0;
}