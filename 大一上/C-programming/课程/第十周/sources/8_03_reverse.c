#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int len,t;
    gets(str);
    
    for(len=0;str[len]!=0;len++);
    for(int i=0,j=len-1;i<j;i++,j--)
      t=str[i],str[i]=str[j],str[j]=t;
    
    printf("%s,%d",str,len);
    return 0;
} 
