#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    struct Node *rchild;
    struct Node *lchild;
    int data;

}*root;

void Insert(int key) {

    struct Node *t;
    struct Node *r  = root;
    struct Node *p;

    if(root == NULL) {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->lchild = p->rchild = NULL;
        


    }



}


int main() {

    struct Node *temp;

    

    return 0;
}