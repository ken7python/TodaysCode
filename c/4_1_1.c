void putchars(char c[]){
    int i = 0;
    while(c[i] != 0){
        putchar(c[i]);
        i++;
    }
}
int main(){
    char text[] = "April 1";
    putchars(text);
    return 0;
}