#include <stdio.h>

int main() {
    int n = 1;
    int m = 1;
    while(n <= 9){
        m = 1;
        while(m <= 9){
            printf("%d * %d = %d\n", n, m, n * m);
            m = m + 1;
        }
        n = n + 1;
    }
    return 0;
}