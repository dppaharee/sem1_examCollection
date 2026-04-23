#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int arm=0,num,i,count;
    printf("enter a number to check:");
	scanf("%d",&num);
	for (i=num;i>0;i=i/10)
	{
		count++;
	}
	for (i=num;i>0;i=i/10)
	{
		arm=arm+pow(i%10,count);
	}
	if (num==arm)
	{
		printf("number is armstrong");	
	}
	else 
	{
		printf("number is not armstrong");
	}
    return 0;
}
