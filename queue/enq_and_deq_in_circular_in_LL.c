#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x) {
    struct node *t;
    t= (struct node*)malloc(sizeof(struct node));

    if(t == NULL) {
        printf("q is full");
    } else {
        t->data = x;
        t->next = NULL;
        if(front == NULL) {
            front = rear = t;
        } else {
            rear->next = t;
            rear = t;
        }


    }
    

}


void enqueue(int x) {

    struct node *t = (struct node*)malloc(sizeof(struct node));

    if(t == NULL) {
        printf("Overflow");
    } else {
        t->data = x;
        t->next = NULL;
        if(front == NULL) {
            front = rear = t;
        }
        rear = rear->next;
        rear = t;
    }

}



int dequeue() {
    int x = -1;
    struct node *t;
    if(front == NULL) {
        printf("queue is empty");
    } else {
        x = front->data;
        t = front; // t ile front aynı bellek adresin işaret ederlre. t direk front'U gösterir.
        front = front->next;
        free(t);
    }
    return x;

}

void Display() {

    struct node *p;
    p = front;
    
    while(p) {
        printf("%d",p->data);
        p = p->next;
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    Display();


    return 0;
}