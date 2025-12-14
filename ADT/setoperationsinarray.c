#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Array  {

    int A[20];
    int size;
    int length;
};


//find the unions;
struct Array *setops(struct Array *arr1,struct Array *arr2) {

    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array));

    // arraylarda ilerlet

    int k = 0;
    int i = 0;
    int j = 0;

    while(i<arr1->length && j<arr2->length){
        
        if(arr1->A[i]<arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else if(arr2->A[j]<arr1->A[i]){
             arr3->A[k++] = arr2->A[j++];

        }else{
            //sorted'larda denk gelirse;
            arr3->A[k++] = arr1->A[i++];
            j++;

        }
    }

    while(i < arr1->length) {
        arr3->A[k++] = arr1->A[i++];
    }

    while(j < arr2->length) {
        arr3->A[k++] = arr2->A[j++];
    }

    arr3->length = k;
    
        
    return arr3;
            
    
}



void Display(struct Array *arr) { 
    for(int i = 0; i<arr->length;i++) {
        printf("%d",arr->A[i]);
    }
}


int main() {
    struct Array arr1 = {{2,6,10,15,25},10,5};
    struct Array arr2 = {{3,6,7,15,20},10,5};
    struct Array *arr3;

    arr3 = setops(&arr1,&arr2);

    Display(arr3);

    free(arr3);


    return 0;
}
     

