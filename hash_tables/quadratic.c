#include <stdio.h>
#define SIZE 10

int hash(int key) {

    return (key % SIZE);
}

int probe(int H[], int key) {
    int index = hash(key);
    int i = 0;
    // find the earliest most empty value;
    while(H[index+i]%SIZE != 0) {
        i++; //increment one
        i = i*i; // double the value

    }

    return (index+i);
    
}



void Insert(int H[], int key) {
    int index = hash(key); // get the index;
    int index_1;
    //check if the right part is empty
    if(H[index] != 0) {
        //find the new quadratic possible index
        index_1 = probe(H,key);

    }
    index = index_1;
    H[index] = key;
}





int main() {

    int HT[10] = {0};

    Insert(HT,12);
    Insert(HT,22);
    Insert(HT,32);






}