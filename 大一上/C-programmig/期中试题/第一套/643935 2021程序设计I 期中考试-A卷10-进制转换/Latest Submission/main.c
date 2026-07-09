#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
	int x,y;
	long long int sum=0,num,mid_number;
	int i,j,len;
	char n[100],m[100]; 
	scanf("%d %d\n",&x,&y);
	gets(n); 
	
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		if(n[i]>='0' && n[i]<='9')  num=n[i]-'0';
		else if(n[i]>='A' && n[i]<='Z')  num=n[i]-'A'+10; 
		sum*=x;
		sum+=num;
	}
    mid_number=sum;
	i=0;
	
	while(mid_number>=y)
	{
		m[i]=mid_number%y;
		mid_number=(mid_number-m[i])/y;
		i++;
	}
	m[i]=mid_number%y;
	for(j=i;j>=0;j--)
	{
		if(m[j]>=0 && m[j]<=9)  printf("%d",m[j]);
		else
		{
			m[j]+=55;
			putchar(m[j]);
		}
	} 
	return 0; 
}