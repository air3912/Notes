#include<stdio.h>
#include<string.h>

int main() {
    char str[100] = "hello \
\n\
"   "world!\n";
    printf("%s",str);
    printf("%s",strstr(str,"wor"));
    
    return 0;
} 
