#include <stdio.h>
#include <stdlib.h>


//first create the Node

struct Node {
    int data;
    struct Node *next;

} * first = NULL;

// second genel linked list'i oluştur

void create(int A[], int n) {

    // linkedlist A-Z:
    /*
    ilk first node'u oluştur başlangıç noktan
     ve onu NULL'a point ettir. 
    
     ardındna last'ı first' e eşitle ki şuanlık first ile lastın aynı olsun

     for loop aç -> 1'den başlasın 0'ıncı index zaten first'e bağlı

     for loop'da
     t diye mallocla değişken aç
     t yi o A indexine işaret ettir
     t'nin next'ine null'de
     sonra last->next=t ve last = t yap ki her seferind

    
    */


    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first -> data = A[0];//for loop 1 'den başlar cunku A[0] zaten var.

    first -> next = NULL;
    last = first;


    for(int i = 1; i<n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;//her oluşturduğumz son t 'ye last'ı bağla
        last = t;// last'ı bağladıktan sonra da o last değeri sonuncu t'ye eşit olsun

        


    }





}

// üç oluşturduğun linked list'i görüntüle


void Display(struct Node*p)  {
    while(p != NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
}

int main() {
    
    int A[] = {3,5,7,10,15};


    create(A,5);
    Display(first);



    return 0;
}