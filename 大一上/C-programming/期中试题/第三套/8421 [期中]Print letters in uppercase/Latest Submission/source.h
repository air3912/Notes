#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    char a[30]={0};
    scanf("%s",a);
    for(int i=0;i<30;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        printf("%c",a[i]);
        else if(a[i]>='a'&&a[i]<='z')
        printf("%c",a[i]-32);
        else 
        continue;
    }
    return 0;
}