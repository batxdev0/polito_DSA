#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20



struct Stack {
    int top;
    int size;
    int *S;


};

void createStack(struct Stack *st) {
    st->size = 6;
    //initialize;
    st->top = -1;
    st->S = (int*)malloc(st->size * sizeof(int));
    

}

int isEmpty(struct Stack *st) {

    if(st->top == -1) {
        return 1;
    }

    return 0;
}

void push(struct Stack *st, int x) {

    if(st->top == st->size -1) {
        return;
    }else {
        st->top++;
        st->S[st->top] = x;
    }
    
    
}

void display(struct Stack *st) {

    for(int i = 0; i<st->size; i++) {
        printf("%d",st->S[i]);
    }
}

int pop(struct Stack *st) {
    int x = -1;
    if(st->top == -1) {
        printf("stack underflow");
        return -1;
    } 
    x = st->S[st->top--];
    st->size--;
    return x;
}


int isFull(struct Stack *st) {
    if(st->top == st->size -1) return 1;

    return 0;
}

int main() {

    struct Stack st;
    createStack(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    push(&st,60);
    printf("%d\n",isFull(&st));
    display(&st);




    return 0;
}