#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include "4_3_2.h"

ミニプログラム* count_numbers(ミニプログラム* arg) {
    整数 i = 1;
    その間繰り返す(i <= 5) {
        表示("%d\n", i);
        iに1を足す;
        秒待つ(1);
    }
    戻る 空;
}

ミニプログラム* count_letters(ミニプログラム* arg){
    文字 letters[] = {
        'A', 'B', 'C', 'D', 'E'
    };
    整数 i = 0;
    その間繰り返す(i < 5) {
        表示("%c\n", letters[i]);
        iに1を足す;
        秒待つ(1);
    }
    戻る 空;
}

整数 main() {
    スレッド箱 th1, th2;

    スレッド作成(&th1, 空, count_numbers, 空);
    スレッド作成(&th2, 空, count_letters, 空);

    スレッド完了まで待つ(th1, 空);
    スレッド完了まで待つ(th2, 空);

    表示("並行処理が完了しました!\n");

    戻る 0;
}