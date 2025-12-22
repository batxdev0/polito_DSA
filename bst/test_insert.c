#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *rchild;
    struct Node *lchild;

}*root = NULL;

void Insert(int key) {
    //t ile gez p ile üret r ile komşuculuk oynar t ile gezdiğinde null olmayanı r ye kaydetmek gibi

    struct Node *r = NULL;
    struct Node *p;
    struct Node *t = root;

    if(root == NULL) {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->data = key;
        p->rchild = p->lchild = NULL;
        root = p;
        return;
    }
    // eğer array boş değilse;
    while (t != NULL) {
        //array'da sonuna kadar git
        r = t; // bi üst komşula kitle
        if(key < t->data) {
            t = t->lchild;
        } else if(key > t->data) {
            t = t->rchild;
        } else 
            return;

        
    }

    p = (struct Node*)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;

    if(key < r->data) {
        r->lchild = p;
    } else {
        r->rchild = p;
    }

    
}


struct Node* Search(int key) {
    struct Node *t = root;

    while(t != NULL) {
        if(key < t->data) {
            t = t->lchild;
        } else if(key > t->data) {
            t = t->rchild;
        } else {
            return t;
        }
    }  
    return NULL;
}

int main() {
    // my my functions run
    struct Node *temp;

    Insert(5);
    temp = Search(5);

    if(temp != NULL) {
        printf("element found %d\n", temp->data);
    } else {
        printf("element not found\n");
    }

    return 0;
}