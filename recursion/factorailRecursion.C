#include <string.h>
#include <stdio.h>

// first way

/*

int factorial(int n) {
    int f = 1;
    for(int i = 1; i<n+1;i++) {
        f = f*i;


    }
    return f;
}


*/

int factorial(int n) {
    if(n == 0) {
        return 1;

    } else {
        return factorial(n-1)*n;
    }
}


int main() {
    int a = 4;
    int res = factorial(a);
    printf("%d",res);
}


