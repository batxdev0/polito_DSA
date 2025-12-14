
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;


    
}*first = NULL,*second = NULL,*third = NULL;

void create( int A[], int n) {
    struct Node *t,*last;

    first = (struct Node*)malloc(sizeof(struct Node));

    first->data=A[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i<n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t ->data=A[i];
        t ->next = NULL;
        last->next = t;
        last = t;

    }

}

void RDisplay(struct Node *p) {

    if(p != NULL) {
        RDisplay(p->next);
        printf("%d ", p->data);

    }
}

void Display(struct Node *p) {
    
    while( p != NULL) {
        
        printf("%d ",p->data);
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
    while (p != NULL) 
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
    
}

int maxElement(struct Node *p) {
    int max = 0;
    while (p != NULL)
    {
        if( p->data >= max) {
            max = p->data;
            p=p->next;
           

        }
       

    }

    return max;
    
}


struct Node *Linear_Search(struct Node*p, int Key) {

    struct Node *q;

    while(p != NULL) {
        if(Key == p->data) {
            
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;

}


struct Node *Rsearch(struct Node *p, int Key) 
{
    if(p == NULL)
        return NULL;
    if(Key == p->data)
        return p;
    return Rsearch(p->next,Key);// eğer aradığım yoksa recursionla kodu tekrar çağır

};


void Insert(struct Node *p, int index, int x) {

    struct Node *t;
    if(index < 0 || index > count(p)) 
        return;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    
    if(index == 0) {
        t -> next = first;
        first = t;
    } else {
        for(int i = 0; i<index -1; i++) {
            p = p->next;     
        }
        t->next = p->next;
        p->next = t;
    }


}

void InsertLast(struct Node *p,int x) {

    struct Node *t,*last;
    t = (struct Node*)malloc(sizeof(struct Node));
    t -> data = x;
    if(first == NULL) {
        first = last;
    } else {
        last ->next = t;
        last = t;

    }
}

void InsertSorted(struct Node *p, int x) {
    
    p = first;
    struct Node *q = NULL;
    struct Node *t;

    while(p && p->data < x) {
        q = p;
        p = p->next;
    }
    t = (struct Node*)malloc(sizeof(struct Node*));
    t->data = x;
    t->next = q->next;
    q->next = t;


}

int Delete(struct Node *p, int index) {
    struct Node *q = NULL;
    int x = -1;

    if(index < 1 || index > count(p)) {
        return -1;
    }

    if(index == 1) {

        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    } else {
        for(int i = 0; i<index -1; i++) {
            q = p;
            p = p->next;
        }
        q -> next = p -> next;
        x = p->data;
        free(p);
        return x;


    }
}

int isSorted(struct Node *p) {
    
    int x = -32323223;

    while(p != NULL) {
        if(p -> data < x){
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
}

void duplicates(struct Node *p) {
    struct Node *q;
    if (p == NULL) return; // Safety: nothing to do if list is empty

    q = p->next;
    while(q != NULL) {
        if(p->data != q->data) {
            p = q;
            q = q -> next;
        } else {
            //burda else kullanmadığımız durumda ilk p = q sonra q  q-next
            //yapiyor ondan kaynaklı olaraktan da ilk 3 eleman gözüküyor
        p->next = q ->next;
        free(q);
        q = p->next;

        }


    }
}


void Reverse1(struct Node *p) {

    int *A = NULL;
    int i = 0;
    struct Node *q = p;
    A = (int*)malloc(sizeof(int)*count(p));

    while(q != NULL) {
        A[i] = q->data;
        q = q->next;
        i++;

    }

    q = p; // burda tekrar q'yi listenin en başına gönderiyor first olarak ki
    // en baştan tersten tablo oluştursun
    i--;
    while( q!= NULL) {

        q -> data  = A[i];
        q =  q->next;
        i--;
    }

}

void Reverse2(struct Node *p) {
    struct Node *q=NULL;
    struct Node *r=NULL;


    while(p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q ->next = r;

    }
    first = q;


}


// bunu tam anlamadım
void Reverse3(struct Node *q, struct Node *p)
{
    if(p) {
        Reverse3(p,p->next);
        p->next = q;

    } else {
        first = q;
    }

}

//concatenating 2 linked list.
void create2( int A[], int n) {
    struct Node *t,*last;

    second = (struct Node*)malloc(sizeof(struct Node));

    second->data=A[0];
    second->next = NULL;
    last = second;

    for(int i = 1; i<n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t ->data=A[i];
        t ->next = NULL;
        last->next = t;
        last = t;

    }

}

void Concat(struct Node *p, struct Node *q)
{
    third = p;

    while (p->next!=NULL)
    {
        p = p->next;

    }
    p->next = q;
    
}

void Merge(struct Node *p, struct Node *q) {
    struct Node *last;

    if(p->data <  q->data) {
        third = last = p;
        p = p-> next;
        third -> next = NULL;

    } else {
        third = last = q;
        q = q->next;
        third->next=NULL;
    }
    while (p && q)
    {
        if(p->data < q->data) {
            last->next = p;
            last = p;
            last->next = NULL;
        } else {
            last -> next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
    }
    if(p) last -> next = p;
    if(q) last -> next = q;
    
}

int isLoop(struct Node *f) {

    struct Node *p,*q;

    p = q = f;

    do {
        p = p->next;
        q = q->next;
        q = q ? q -> next : q;

    } while (p && q && p != q);
    if(p == q) {
        return 1;
    } else {
        return 0;
    }
}

int Length(struct Node *p) {

    int len = 0;
    do {
        len++;
        p = p->next;

    } while(p != Head);
    return len;

}

void Insert(struct Node *p, int index, int x) {

    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    int i;
    if(index < 0 || index > Length())
        return;

    if(index == 0) {
        struct Node *t = (struct Node*)malloc(sizeof(struct Node));
        t-> data = x;
        if(Head == NULL) {
            Head =t;
            Head -> next = Head;


        } else {
            while(p->next != Head) p = p->next;
            p -> next = t;
            t->next = Head;
            Head = t;
        }
    } else {
        for(int i = 0; i<index -1; i++) p= p->next;
        struct Node *t = (struct Node*)malloc(sizeof(struct Node));
        t-> data = x;
        t->next = p->next;
        p->next = t;


    }
 
}







int main()
{
    int A[] = {3,5,7,10,15};
    int B[] = {1,2,3,4,5};

    create(A,5);


    
    RDisplay(Head);
    return 0;
}