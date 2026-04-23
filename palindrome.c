#include<stdio.h>
#include<stdlib.h>
int main()
{
	int pal=0,num,i;
    printf("enter a number to check:");
	scanf("%d",&num);
	for (i=num;i>0;i=i/10)
	{
		pal=pal*10+i%10;
	}
	if (num==pal)
	{
		printf("number is palindrome");	
	}
	else 
	{
		printf("number is not palindrome");
	}
    return 0;
}
