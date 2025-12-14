
#include <stdio.h>

void fun(int n) {
    if(n>0) {
        printf("%d",n);
        fun(n-1);
    }
}


int main() {
    int a = 5;
    fun(5);
}
// direk tek funcion 'da sonuna kadar gelen fonskiyon
// 3 2 1 -> NULL
// execute = 


