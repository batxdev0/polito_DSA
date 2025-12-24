#include <stdio.h>
#define SIZE 10

int hash1(int key) {

    return (key % SIZE);
}

int hash2(int key) {
    return (7-(key%7));
}
// h'(X) = (hash1(x) + i * hash2(x))%SIZE;
int probe(int H[], int key) {
    int h1 = hash1(key);
    int h2 = hash2(key);
    int i = 0;
    int idx;
    // out of bounds sorunuyla karşılaşmamak için içini idx diye yapip direk x<10 olan değerleri içine atiyoru
    
    do {
        idx = (h1 + i * h2) % SIZE;
        i++;
    } while (H[idx] != 0);

    return idx;
}

void Insert(int H[] ,int key) {
    
    int index = hash1(key);
    int index1 = 0;

    if(H[index] != 0) {
        index = probe(H,key);
    }
    

    H[index] = key;
    
        
}

int main() {

    int HT[10] = {0};

    Insert(HT,5);
    Insert(HT,25);
    Insert(HT,15);
    Insert(HT,35);
    Insert(HT,95);


}