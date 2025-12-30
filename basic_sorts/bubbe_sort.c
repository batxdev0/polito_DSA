#include <stdio.h>
#include <string.h>

void bubble_sort(int A[], int size) {

    int temp;

    for(int i = 0; i<size; i++) {
        for(int j = 1; j<size;j++) {
            if(A[j-1] > A[j]) {
                temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }
        }
    }


}







int main () {


    int A[] = {3,2,45,5,700,6};
    bubble_sort(A,6);
    // Display the sorted array
    for(int i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");


    return 0;
}