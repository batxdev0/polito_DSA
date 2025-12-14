#include <stdio.h>
#include <string.h>


struct Array {
    int A[20];
    int size;
    int length;
};

int Get(struct Array arr, int index) {
    if(index >= 0 && index < arr.length) {
       return arr.A[index];

    }
    return -1;
}





void Set(struct Array *arr, int index, int x) {
    if(index >= 0 && index < arr-> length) {
        arr->A[index] = x;
    }
}



int Max(struct Array arr) {

    int max = arr.A[0];

    for(int i = 1; i<arr.length; i++) {

        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
}


int min(struct Array arr) {
    int min = arr.A[0];

    for(int i = 1; i<arr.length; i++) {
        if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    return min;
}



int sum(struct Array arr) {
    
    int c = 0;

    for(int i = 0; i< arr.length; i++) {
        c += arr.A[i];
    }
    return c;
}



float Avg(struct Array arr) {
    return (float)sum(arr) / arr.length;
}

int main() {
    struct Array arr = {{2,3,4,5,6},20,5};
    

    printf("%d\n",sum(arr));


    return 0;

}