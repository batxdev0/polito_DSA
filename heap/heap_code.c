#include <stdio.h>

//ınsertion;

void Insert(int H[], int n) {
    int i = n;
    int temp;
    temp = H[i];
    // 0 olmadığını varsaydığımız evren
    while(i>1 && temp > H[i/2]) {
        // en küçük root'a git;
        H[i] = H[i/2];
         /*if my new value is bigger than my old value
         then directly apppend the new variable with the old floor root
         location
         */
        i = i/2; // and change their index too in order to secure conjugation

    }
    H[i] = temp; // copy the old value
}


int Delete(int A[], int n) {
    int i,j,x,temp,val;
    val = A[1];
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    i=1;
    j=2*i;

    while (j<n-1)
    {
        if(A[j+1] > A[j]) {
            j = j+1;

        }
        if(A[i] < A[j]) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2*j;
        } else {
            break;

        
    }
    return val;

    }
}

int main() {
    int H[] = {0,10,20,30,25,5,40,35};
    
    // it has to be execute as 40,25 35 10 5 20 30
    for(int i = 2; i<=7;i++)  {
        Insert(H,i);
    }
    for(int i = 7; i>1; i--) {
        Delete(H,i);
    }
    
    for(int i = 1; i<=7; i++) {
        printf("%d", H[i]);
        printf("\n");
    }
   

    return 0;
}