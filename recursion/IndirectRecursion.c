#include <stdio.h>
#include <string.h>


void funB(int n);

void funA(int n) {

    if(n > 0) {
        printf("%d ",n);
        funB(n-1);
    }
}


void funB(int n) {
    if(n > 1) {
        printf("%d ",n);
        funA(n/2);

    }
}

int main() {

    funA(20);


}


//Indirect Recursion'da her zaman fonksiyon 2 farklı fonksiyonda manüpüle edilerek oluşturulan genel bir 
//tail recursion fonksiyonudur.

// anlamak için çiz.