#include<stdio.h>
#include<string.h>

void print_menu(){
    printf("\n1. 上楼 \n2. 下楼 \n3. 遛弯 \n4. 静思 \nn. 退出");
    printf("\n\n请输入 1..4 选择菜单，输入 no 退出程序:");
} 

int main() {
    char s[80];
    while(1){
        print_menu();
        gets(s);
        if (s[0]=='n') return 0;
        if (s[0]>='1'&&s[0]<='4')
            printf("执行菜单 %d\n", s[0]-'0');
    }
} 
