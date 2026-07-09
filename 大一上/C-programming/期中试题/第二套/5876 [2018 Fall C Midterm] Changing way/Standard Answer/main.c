#include <stdio.h>
int main() {
    char ch, op;
    int dis = 'a' - 'A';
    int toUpper = 1;

    while ((ch = getchar()) != '\n') {
        op = ch;
        if (ch == '*') {
            toUpper = (toUpper == 1 ? 0 : 1);
            printf("%c", ch);
            continue;
        } else if (toUpper && ch >= 'a' && ch <= 'z') {
            // 转大写，并且为小写
            op = ch - dis;
        } else if (!toUpper && ch >= 'A' && ch <= 'Z') {
            // 转小写，并且为大写
            op = ch + dis;
        }

        printf("%c", op);
    }

    printf("\n");
    return 0;
}

