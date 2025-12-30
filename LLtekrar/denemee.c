#include <stdio.h>
#include <string.h> 
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
}*first = NULL;



void create(int A[], int size) {

    struct Node *t;
    struct Node *last;

    first = (struct Node*)malloc(sizeof(struct Node));

    first->data = A[0];
    first->next = NULL;

    last = first;

    for(int i = 1; i<size; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next =  NULL;
        last->next = t;
        last = t;
    }

}

void Display(struct Node *p) {
    while (p)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    
}

void Rdisplay(struct Node *p) {
    // ilk boş mu kontrolü
    if(p == NULL) {
        return;
    }
    //boş değilse veriyi bastır
    printf("%d\n",p->data);
    //bastırdıysan bir sonraki eleman'a git.
    Rdisplay(p->next);
}

int sum(struct Node *p) {
    int s = 0;
    while(p) {
        s += p->data;
        p = p->next;
    }
    return s;
}

int count(struct Node *p) {
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int max(struct Node *p) {
    int m = 0;

    while(p) {
        if(p->data > m) {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}


void Insert(struct Node *p, int x, int index) {



    if(index < 0 || index > count(first)) return;

    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));

    t->data = x;

    if(index == 0) {
        t->next = first;
        first = t;

    } else {
        for(int i = 0; i<index-1; i++){
            p = p->next;

        }

        t->next = p->next;
        p->next = t;
    }
}

int main() {

    int A[] = {1,3,20,233,7};
    create(A,5);
    Rdisplay(first);
    
    //printf("%d sum\n",sum(first));
    //printf("%d count\n",count(first));
    //printf("%d max\n",max(first));
    
    

    return 0;
}