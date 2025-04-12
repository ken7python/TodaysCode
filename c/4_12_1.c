#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    char *fortune[] = {"大吉", "中吉", "小吉", "末吉"};
    int n = rand() % 4;
    printf("今日の運勢は... %sです。\n",fortune[n]);
    return 0;
}