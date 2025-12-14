#include <string.h>
#include <stdio.h>

struct Array  {

    int A[20];
    int size;
    int length;
};

void Display(struct Array *arr) {
    for(int i = 0; i<arr->length;i++) {
        printf("%d",arr->A[i]);
    }
}


int BinarySearch(struct Array *arr, int key) {

    int l = 0;
    int h = arr->length;
    

    while (l <= h)

    {   
        int mid = (l + h) / 2;

        if( key  == arr->A[mid]) {
            return mid;
        }

        if(key <= arr->A[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;
}



int RBinarySearch(int a[], int l, int h, int key) {


 
        
        while(l <= h) {

            int mid = (l+h)/2;
            if(key == a[mid]) {
                return mid;
            } else if(key < a[mid]) {
                return RBinarySearch(a,l,mid -1, key);
            } else {
                return RBinarySearch(a,l+1,h,key);
            }

            
        }

        return -1;
        
   

}

int main() {
    struct Array arr = {{2,3,4,5,6},20,5};
    //printf("%d\n",BinarySearch(&arr,10));
    printf("%d\n",RBinarySearch(arr.A,0,arr.length,3));
    Display(&arr);
    return 0;

}
//if not find it's will oput -1 else the integer decl. at the index.
