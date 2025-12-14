//find the missing element
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Array  {

    int A[20];
    int size;
    int length;
};

//finding duplicates

void findDups(struct Array *arr) {
    // array var
    
    for(int i = 0; i< arr->length; i++) {
        //look for duplicates
        if(arr->A[i] == arr->A[i+1]) {
            //assign new variable
            int j = i+1;
            //look for the whole array
            while(arr->A[j] == arr->A[i]) {
                j++;
            }
            printf("%d appearing %d times\n",arr->A[i],j-i);
            i = j -1;
            

        }
    }
}


int main() {             
    struct Array arr = {{3,15,8,8,10,12,15,15,15,20},20,7};
    findDups(&arr);
}