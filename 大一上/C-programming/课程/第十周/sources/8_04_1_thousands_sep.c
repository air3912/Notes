#include<stdio.h>
#include<string.h>

#define N_LEN 16 
#define T_SEP ','

void reverse(char s[]) {}; 

int main() {
    int d; // Ç§·ÖÎ»·Ö¸ô·û
    char s[N_LEN] = {0};
    
    scanf("%d",&d);
    int q=d<0?-d:d;
    int p=0,sep=0;
    while(q!=0) {
        if (sep==3) {
            s[p++]=T_SEP;
            sep=0;
        }
        sep++;
        s[p++]=q%10+'0';
//        printf("%c\n",s[p-1]);
        q=q/10;
    } 
    if (d<0) s[p++]='-';
    else if (d==0) s[p++]='0';
    s[p]=0;
    
    reverse(s);
    
    printf("%s",s);
} 
