#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Array  {

    int A[20];
    int size;
    int length;
};


void Reverse(struct Array *arr) {

    int *B;
    B = (int*)malloc(arr->length*sizeof(int));

    //it use B for a temporary array to make it reverse b[0] = a[6] to b[6] = a[0];
    for(int i = arr->length-1,j=0;i>=0;i--,j++) {
        B[j] = arr->A[i];

    }

    //it inject B to A with the reverse order
    
    for(int i = 0; i<arr->length; i++){
        arr->A[i] = B[i];
    }


}

/*





*/


void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse2(struct Array *arr) {
    int i,j;

    for(i = 0,j = arr->length-1; i<j;i++,j--) {
        swap(&arr->A[i],&arr->A[j]);
    }


}


void Display(struct Array *arr) {
    for(int i = 0; i<arr->length;i++) {
        printf("%d",arr->A[i]);
    }
}



int main() {
    struct Array arr = {{2,3,4,5,6},20,5};
    //printf("%d\n",BinarySearch(&arr,10));
    Reverse2(&arr);
    Display(&arr);
    return 0;

}