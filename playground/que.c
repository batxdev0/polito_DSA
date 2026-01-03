#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Queue {
    int front;
    int Rear;
    int size;
    int *S;

};


void createQueue(struct Queue *st) {
    st->size = 20;
    st->front = st->Rear = -1;
    st->S = (int*)malloc(st->size*sizeof(int));

}

void enqueue(struct Queue *st, int x) {
    if(st->Rear == st->size -1) {
        printf("Q is full");
    }
    st->Rear++;
    st->S[st->Rear] = x;
    
}


int dequeue(struct Queue *st) {

    int x = -1;

    if(st->front == st->Rear) {
        printf("nothing to dequeue");
        return 0;
    }
    st->front++;


}





void Display(struct Queue *st) {

    for(int i = st->front+1; i <= st->Rear; i++) {
        printf("%d",st->S[i]);
    }

}



int main() {

    struct Queue st;

    createQueue(&st);
    enqueue(&st,2);
    enqueue(&st,5);
    enqueue(&st,5);
    enqueue(&st,5);
    enqueue(&st,5);
    dequeue(&st);
    //dequeue(&st);

    Display(&st);
    return 0;
}