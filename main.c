#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 0;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0'; // 문자열의 끝을 나타내는 null 문자를 삽입합니다.

    printf("%s\n", str);
    
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    system("PAUSE");
    return 0;
}
