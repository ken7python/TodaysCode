#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice() {
    srand((unsigned)time(NULL));
    return rand() % 6 + 1;
}

int main() {
    printf("サイコロを振るよ〜\n");
    printf("出た目は %d だよ〜🎲\n", dice());
}