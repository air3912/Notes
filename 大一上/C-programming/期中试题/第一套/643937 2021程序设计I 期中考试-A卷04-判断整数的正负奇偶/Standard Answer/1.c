/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n>0){
        if(n%2==1){
            printf("positive odd\n");
        }
        else{
            printf("positive even\n");
        }
    }
    else if(n<0){
		if(n%2==-1){
            printf("negative odd\n");
        }
        else{
            printf("negative even\n");
        }
    }
    return 0;
}
 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i;
	for(i=2; i<n; i++){
		if(n%i==0)break;
	}
	if(i==n)printf("false\n");
	else printf("true\n");
    return 0;
}
