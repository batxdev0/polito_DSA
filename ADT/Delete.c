#include <stdio.h>
#include <string.h>



struct Array {
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr) {
    int i;
    printf("Elements are\n");
    for(int i = 0; i<arr.length; i++) {
        printf("%d",arr.A[i]);
    }
}



int delete(struct Array *arr, int index) {


    int i;

    if(index >= 0 && index<arr->length) {
        for(i = index; i<arr->length; i++) {
            arr->A[i] = arr->A[i+1];


        }
        arr->length--;
    }
    return 0;
}


/*

int delete(struct Array *arr, int index)  {
    if(index >=  0 && index<arr->length) {
        for(int i = index; i<arr->length; i++) {
            arr->A[i] = arr->A[i+1];

        }
        arr->length--;
    }
    rwturn 0;
}


*/




int main() {

    struct Array arr = {{2,2,3,4,5,6},20,5}; //(( {{array},size,length}));

    delete(&arr,1);
    Display(arr);
    return 0;

}