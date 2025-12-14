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


void Append(struct Array *arr, int x) {
    if(arr->length  < arr-> size) {
        arr->A[arr->length++] = x;

    }

}

void Insert(struct Array *arr, int index, int x) {

    int i;
    if(index >= 0 && index < arr->length){
        for(int i = arr->length; i > index; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void Insert(struct Array *arr int index, int x) {
    // poziyonu bul
    // pozisyona kadar değelerleri ilerlet
    // gerekli yere yerleştir

    if(index >= 0 && index < arr -> length) {
        for(int i = arr->length; i>index; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }

}


int main() {

    struct Array arr = {{2,3,4,5,6},20,5}; //(( {{array},size,length}));

    Insert(&arr,1,10);
    Display(arr);
    return 0;

}