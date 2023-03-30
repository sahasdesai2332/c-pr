#include<stdio.h>

int fact(int n) 
{
	if (a == 0)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
main()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	printf("the factorial is %d",fact(a));
}
