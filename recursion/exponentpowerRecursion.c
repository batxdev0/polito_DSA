#include <stdio.h>
#include <string.h>


// first way ***
/*


int power(int r, int p) {
    if (p == 0) {
        return 1;
    } else {
        return r * power(r, p - 1);
    }
    
}

*/

int power(int m, int n) {
    
    if(n == 0) {
        return 1;

    }if(n % 2 == 0) {
        return power(m*m,n/2);

    } else {
        return m*power(m*m,(n-1)/2);
    }
}

int main() {
    int root = 2;
    int pwr = 5;
    int result = power(root,pwr);
    printf("%d",result);
}