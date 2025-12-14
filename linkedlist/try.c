#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *first = NULL;


void create(int A[],int n) {

    struct Node *t,*last;

    first = (struct Node*)malloc(sizeof(struct Node));
    first-> data = A[0];
    first->next = NULL;

    last = first;
    
    for(int i = 1; i<n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next = NULL;
        last->next = t;
        last = t;

    }


}

// ?
void RDisplay(struct Node *p) {
    
    while(p!= NULL) {
        RDisplay(p->next);
        printf("%d",p->data);
    }


}

void Display(struct Node *p) {
    while(p != NULL) {
        printf("%d\n", p->data);
        p=p->next;
    }
}

int count(struct Node *p) {
    int c = 0;
    while (p != NULL)
    {
        p = p->next;
        c++;
    }
    
    return c;
}

int sum(struct Node *p) {
    int sum = 0; 
    while( p!= NULL) {
        sum = sum + p->data;
        p = p->next;
    }

    return sum;
}

int maxElement(struct Node *p) {
    int max = 0;

    while(p != NULL) {
        if(p->data > max)  {
            max = p->data;
            p = p->next;

        }
    }
    return max;
}


struct Node* Linear_Search(struct Node *p, int key) {

    struct Node *q;

    while( p != NULL) {
        if(key == p->data) {
            q->next = p->next;
            p -> next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

struct Node* Rsearch(struct Node *p, int key) {


    if(p == NULL) {
        return NULL;
    }  if(key == p->data) {
        return p;
    }
    
    return Rsearch(p->next,key);
}


void Insert(struct Node *p, int index, int x) {
    struct Node *t;
    if(index < 0 || index > count(p)){
        return;
    }

    t = (struct Node*)malloc(sizeof(struct Node));
    t -> data = x;

    if(index == 0) {
        t-> next = first;
        first = t;
    } else {
        for(int i = 0; i<index -1; i++) {
            // önce p kadar ilerlettir
            p = p ->next;
            
        }
        t->next = p ->next;
        p->next = t;

    }
 
    
    
}

int main() {
    int A[] = {1,5,8,20,21};
    create(A,5);
    Display(first);


    return 0;
}