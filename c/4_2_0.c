#include <stdio.h>
#include <string.h>

//putchars関数
void putchars(char c[]){
    int i = 0;
    while(c[i] != 0){
        putchar(c[i]);
        i++;
    }
}
//messageクラス
struct message{
    char name[20];
    char text[100];
};
//コンストラクタ
void _message(struct message* msg,char name[],char text[]){
    strcpy(msg->name, "ken7python");
    strcpy(msg->text, "Hello,Today is Aplil 2nd, 2025");
}
//メソッド
void putmessage(struct message* msg){
    putchars("name:");
    putchars(msg->name);
    putchar('\n');
    putchars("text:");
    putchars(msg->text);
}

//main関数
int main(){
    struct message msg;
    _message(&msg, "ken7python", "Hello,Today is Aplil 2nd, 2025");
    putmessage(&msg);

    return 0;
}