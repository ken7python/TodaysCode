#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *messages[] = {
        "大丈夫、あしたはきっといい日になる🌈",
        "あなたはちゃんとがんばってるよ🌷",
        "少し休むのも大切だよ〜🍀",
        "ゆっくりでも、一歩ずつ進めばいいよ☺️"
    };

    srand((unsigned)time(NULL));
    int i = rand() % 4;
    printf("message: %s\n", messages[i]);

    return 0;
}