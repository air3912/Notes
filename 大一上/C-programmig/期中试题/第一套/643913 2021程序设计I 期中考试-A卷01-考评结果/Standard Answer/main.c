#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        int x;
        scanf("%d",&x);
        if(x==10){
            printf("Perfect\n");
        }else if(x>=7){
            printf("Excellent\n");
        }else if(x>=3){
            printf("Good\n");
        }else{
            printf("Practice makes perfect\n");
        }
    }
    return 0;
}