#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;

}*top = NULL;


void push(int x) {

    struct Node *t  = (struct Node*)malloc(sizeof(struct Node));
    if(t == NULL)
        printf("Stack OF");
    else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop() {

    struct Node *t;
    int x = -1;
    if(top == NULL) {
        printf("Stack is empty");

    } else {
        t = top;
        top  = top ->next;
        x = t->data;
        free(t);

    }

    return x;
}

void Display() {
    struct Node *p;
    p = top;
    while(p!= NULL) {
        printf("%d",p->data);
        p = p->next;
    }
    printf("\n");
}




char *InToPost(char *infix) {

    int i = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char*)malloc((len+1));

    while (infix[i] != '\0');
    {
        if(isOperand(infix[i])) {
            postfix[j++] = infix[i++];
        } else {
            if(pre(infix[i]) > pre(top->data)){
                push(infix[i++])

            } else {
                postfix[j++] = pop();
            }
                
        }
    }
    while(top != NULL) {
        postfix[j++] = pop();
    
    } 
    postfix[j] = '\0';
    
}
/*
char *InToPost(char *infix) {
    // create the postfxi;
    char *postfix;
    int len = strlen(infix);
    postfix = (char*)malloc((len+1));

    while (infix[i] != '\0') {

        if(isOperand(infix[i])) {
            postfix[j++] = infix[i++];

        } else {
            if(pre(infix[i]) > pre(top->data)) {
                push(infix[i++]);

            } else {
                postfix[j++] = pop();
            }
        }

    }
    while (top != NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    
}






*/

int main() {

    char *infix = "a+b*c-d/e";
    char *postfix = InToPost(infix);
    return 0;
}