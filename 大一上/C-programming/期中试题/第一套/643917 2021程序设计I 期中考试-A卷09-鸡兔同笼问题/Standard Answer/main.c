/*
#include<stdio.h>
int main(){
    int head, chicken_head, rabbit_head, leg = 0;
    scanf("%d %d", &head, &leg);

    if((leg >= (2 * head + 2)) && (leg <= (4 * head - 2)) && ((leg - 2 * head) % 2 == 0))
    {
		rabbit_head = (leg - 2 * head) / 2;
		chicken_head = head - rabbit_head;
		printf("%d %d\n", chicken_head, rabbit_head);
    }
    else
	{
		printf("Error\n");
	 } 
    return 0;
}
*/
// //另一种实现思路
#include<stdio.h>
int main(){
     int head, chicken_head, rabbit_head, leg = 0;
     scanf("%d %d", &head, &leg);

     rabbit_head = (leg - 2 * head) / 2;
     chicken_head = head - rabbit_head;

     if((rabbit_head >= 1) && (chiken_head >= 1) && (leg%2==0))
     {
 		  printf("%d %d\n", chicken_head, rabbit_head);
     }
     else
 	{
		printf("Error\n");
 	}
     return 0;
}

