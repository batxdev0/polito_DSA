#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *S;
};


void create(struct Stack *st) {
    printf("Enter Size:");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size*sizeof(int));

}

void Display(struct Stack *st) {
    
    int i = 0;
    for(i = st->top; i>= 0; i--) {
        printf("%d", st->S[i]);

    }
}

void push(struct Stack *st, int x) {

    if(st->top == st->size -1) 
        printf("Stack overflow\n");
    else {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack * st) {
    int x = -1;
    if(st->top == -1) {
        printf("Stack Underflow\n");
        
    } else {
        x = st->S[st->top--];

    }
    return x;
}

int peek(struct Stack st, int index) {
    int x = -1;
    int pos = st.top - index + 1;
    if(pos < 0 || pos > st.top) {
        printf("Invalid Index\n");
    } else {
        x = st.S[pos];
    }
    return x;
}

int isEmpty(struct Stack *st) {

    if(st->top ==-1)
        return 1;
    return 0;
}

int isFull(struct Stack *st) {
    return st->top = st->size -1;
}

int stackTop(struct Stack st) {
    if(!isEmpty(&st))
        return st.S[st.top];
    return -1;

}

int main() {

    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

    printf("%d\n",peek(st,3));
    Display(&st);




    return 0;
}