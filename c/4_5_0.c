#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    printf("タイマー開始〜\n");
    start = time(NULL);

    getchar();

    end = time(NULL);
    printf("経過時間は %ld 秒だよ〜\n", end - start);
    return 0;
}