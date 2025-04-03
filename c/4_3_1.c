#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* count_numbers(void* arg) {
    int i = 1;
    while(i <= 5) {
        printf("%d\n", i);
        ++i;
        sleep(1);
    }
    return NULL;
}

void* count_letters(void* arg){
    char letters[] = {
        'A', 'B', 'C', 'D', 'E'
    };
    int i = 0;
    while(i < 5) {
        printf("%c\n", letters[i]);
        ++i;
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t th1, th2;

    pthread_create(&th1, NULL, count_numbers, NULL);
    pthread_create(&th2, NULL, count_letters, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    printf("並行処理が完了しました!\n");

    return 0;
}