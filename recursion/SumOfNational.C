#include <stdio.h>
#include <string.h>


// FIRST WAT
/*

int sum(int n) {
    if( n == 0) {
        return 0;
    } else {
        return sum(n-1)+n;
     }
}

int main() {

    int a = 5;
    int res = sum(5);
    printf("%d",res);

}

*/

// Second Way
int sum(int n){
    int sum = 0;
    for(int i = 1; i<=n;i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int a = 5;
    int res = sum(a);
    printf("%d",res);
}