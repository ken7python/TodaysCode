//cc 4_6_0.c && ./a.out
//cc -O2 4_6_0.c && ./a.out
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    int i = 0;
    long long sum = 0;
    while (i < 1000000) {
        //printf("%d\n", i);
        sum += i;
        ++i;
    }

    clock_t end = clock();

    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("合計: %lld\n", sum);
    printf("実行時間: %f秒\n",duration);

    return 0;
}