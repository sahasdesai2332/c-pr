//2.WAP to find if a given nunmber is divisible by 3 & 5
//both or not using UDF.

#include<stdio.h>
void div(){

		int a;
		printf("enter the value of a");
		scanf("%d",&a);
		
		if(a%3==0 && a%5==0)
		{
			printf("number is divissable by 3&5");
		}
		else
		{
			printf("number is not divissable by");
		}
}
main()
{
	div();
}
