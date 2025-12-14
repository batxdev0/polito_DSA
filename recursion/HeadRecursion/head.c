#include <stdio.h>

// the function will come back to the head after touching to the end

void fun(int n) {
    if(n>0) {
        fun(n-1);
        printf("%d",n);

    }
}

int main() {

    int a = 5;
    fun(a);
}