//find the missing element
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Array  {

    int A[20];
    int size;
    int length;
};

//for one missing
void findMissing(struct Array *arr) {
    // dec diff

    int diff = arr->A[0] - 0; // 6

    for(int i = 0; i<arr->length; i++) {
        //eğer index ile değer arasındaki fark diff e eşit değilse değeri printle
        if(arr->A[i] - i != diff) {
            printf("missing no is %d at index %d\n",i+diff,i);
        }
        

    }
}

//more than 1 missing

void findMissing2(struct Array *arr) {
    int diff = arr->A[0] - 0;
}
void findMissing1(struct Array *arr) {
    // dec diff

    int diff = arr->A[0] - 0; // 6

    for(int i = 0; i<arr->length; i++) {
        //eğer index ile değer arasındaki fark diff e eşit değilse değeri printle
        if(arr->A[i] - i != diff) {
            while (diff < arr->A[i]-i) {
                printf("%d\n",i+diff);
                diff++;
            }
            

            
        }
        

    }
}


int main() {             0 1 2 3 4  5  6  7  8  9  10
    struct Array arr = {{6,7,8,9,11,12,15,16,17,18,19},20,7};
    findMissing1(&arr);
}