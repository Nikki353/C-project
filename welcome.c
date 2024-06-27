#include<stdio.h>

void main()
{
	printf("Welcome to C Programming Language");
}



#include<stdio.>
#include<stdlib.h>

void main()
{
	int a,b,c;
	system("clear");
	printf("\n Enter A Value ");
	scanf("%d",&a);
	printf("\n Enter B Value ");
	scanf("%d",&b);
	c=a-b;
	printf("The subtraction of Two values are %d",c);
}




#include<stdio.>
#include<stdlib.h>

void main()
{
	int a,b,c;
	system("clear");
	printf("\n Enter A Value ");
	scanf("%d",&a);
	printf("\n Enter B Value ");
	scanf("%d",&b);
	c=a*b;
	printf("The Multiplication of Two values are %d",c);
}

#include<stdio.>
#include<stdlib.h>

void main()
{
	int a,b,c;
	system("clear");
	printf("\n Enter A Value ");
	scanf("%d",&a);
	printf("\n Enter B Value ");
	scanf("%d",&b);
	c=a/b;
	printf("The Division of Two values are %d",c);
}

#include<stdio.>
#include<stdlib.h>

void main()
{
	int a=60,b=30,c;
	system("clear");
	c=a-b;
	printf("The subtraction of Two values are %d",c);
}


#include<stdio.>
#include<stdlib.h>

void main()
{
	int a=60,b=30,c;
	system("clear");
	c=a*b;
	printf("The Multiplication of Two values are %d",c);
}

#include<stdio.>
#include<stdlib.h>

void main()
{
	int a=60,b=30,c;
	system("clear");
	c=a/b;
	printf("The Division of Two values are %d",c);
}


#include<stdio.h>
#include <stdlib.h>

void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\n Enter how many numbers you want to sum");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("The sum Value is %d",sum);
	getch();
}

}



#print the range of prime numbers:

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,fact;
	//clrscr();
	system("clear");   
	printf("\n Enter the range of prime numbers : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
				fact++;
			}

			if(fact==2)
				printf("%d\t",i);
		}
	//	getch();
	}


#sum of n natural numbers by using do-while 
	#include <stdio.h>
	#include <conio.h>
	void main()
	{
		int i,n,sum=0;
		clrscr();
		do
		{
			printf("\n enter your range of numbers: ");
			scanf("%d",&n);
		}while(n<=0);
		
		for(i=1;i<n;i++)
		{
			sum+=1;
		}
		printf("\n %d",sum);
	
	getch();
}




		}
	}










