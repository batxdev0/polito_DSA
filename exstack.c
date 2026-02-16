#include <stdio.h>
#define MAX 20


struct Stack {
    int data[MAX];
    int top;

};

void initStack(struct Stack *st) {
    st->top = -1;



}


int isEmpty(struct Stack *st) {
    return st->top == 1;
}


int isFull(struct Stack *st) {
    return st->top == MAX -1;

}

void push(struct Stack *st, int x) {
    //empty*
    if(isFull(st)) {
        printf("stack overflow");
        return;
    } 
    st->top++;
    st->data[st->top] = x;
}

int pop(struct Stack *st) {
    if(isEmpty(st)) {
        printf("stack bos");
        return -1;
    }

    return st->data[st->top--];
}

void printstack(struct Stack *st) {
    printf("Stack: ");
    
    for(int i = 0; i<= st->top; i++) {
        printf("%d ",st->data[i]);

    }
}

int main() {

    struct Stack st;
    initStack(&st);

    push(&st,15);
    push(&st,11);
    push(&st,12);
    push(&st,13);
    pop(&st);

    printstack(&st);



}