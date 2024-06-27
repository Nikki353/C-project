#include<stdio.h>

void main()
{
	int  a,b;

	printf("\n Enter A value");
	scanf("%d",&a);
	printf("\n\n Enter B Value :");
	scanf("%d",&b);
	a=a+b;
	printf("\n The sum of two values are %d",a);

	a=a-b;
	printf("\n\n The subtraction of 2 values are %d",a);

	//multiplication
	a=a*b;
	printf("\n The multiplication of two values %d",a);

	//division
	a=a/b;
	printf("\n\n The Division of Two values %d",a);

	//maduls
	a=a%b;
	printf("\n\n The Division of Two values %d",a);

}
