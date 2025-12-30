#include <stdio.h>
#define SIZE 10

int hash(int key) {
    return key%SIZE;
}

int probe(int H[], int key) {
    int index = hash(key);
    int i = 0;

    while( H[index+i]%10 != 0) {
        i++;
        i = i*i;
    }
    return (index+i);
}

void Insert(int H[],int key) {
    int index = hash(key);


    if(H[index] != 0) {
        int index1= probe(H,key);
        index = index1;
    }
    
    H[index] = key;


}

int Search(int H[], int key) {
    int index = hash(key);
    int i = 0;
    while(H[(index+i)%SIZE]!= key ) {
        i++;
        i = i*i;

    }
    return (index+i)%SIZE;
}

int main() {
    int HT[10] = {0};

    Insert(HT,12);
    Insert(HT,22);
    Insert(HT,32);


    printf("Key found at %d\n",Search(HT,35));

    return 0;
}