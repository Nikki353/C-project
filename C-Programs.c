void 
int 
char 
float 
if 
else 

#write a c program to printf welcome
#include<stdio.h>

void main()
{
	printff("Welcome to C Programming Language");
}



//write a c program to printf given string by using keyboard input
#include<stdio.h>

void main()
{  
	char name[100];
	printff("\n Enter which you want to printf\n\n");
	scanf("%s",name);
	printf("The Given name is %s",name);

}


+ - * / % = > < >=  <=

//write a c program to printf sum of two values

#include<stdio.h>

void main()
{
	int  a=60, b=40;
	a=a+b;
	printff("\n The sum of two values are %d",a);
}



#include<stdio.h>

void main()
{
	int  a,b;
	printff("\n Enter A Value");
	scanf("%d",&a);
	printff("\n Enter B Value");
	scanf("%d",&b);
	a=a+b;
	printff("\n The sum of two values are %d",a);
}


#include<stdio.h>

void main()
{
	int  a,b;
	printff("\n Enter A  and B Values");
	scanf("%d%d",&a,&b);
	a=a+b;
	printff("\n The sum of two values are %d",a);
}


@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

by float Data type:



#include<stdio.h>

void main()
{
	float  a=60, b=40;
	a=a+b;
	printff("\n The sum of two values are %f",a);
}


#include<stdio.h>

void main()
{
	int  a,b;
	printff("\n Enter A Value");
	scanf("%f",&a);
	printff("\n Enter B Value");
	scanf("%f",&b);
	a=a+b;
	printff("\n The sum of two values are %f",a);
}


#include<stdio.h>

void main()
{
	float  a,b;
	printff("\n Enter A  and B Values");
	scanf("%f%f",&a,&b);
	a=a+b;
	printff("\n The sum of two values are %f",a);
}

#include<stdio.h>
void main ()
{
	char name[100];
	printff("\n Enter Any Name : ");
	scanf("%s",name);
	printff("\n\n Given Name is %s",name);
}

#include<stdio.h>
void main ()
{
	char name[15]="Ravindra";
	//printff("\n Enter Any Name : ");
	//scanf("%s",name);
	printff("\n\n Given Name is %s",name);
}


#include<stdio.h>

void main() 
{
	int a=50,b=10;
	if(a>b)
		printff("\n A is Big %d",a);
}


#include<stdio.h>

void main() 
{
	int a,b;
	printff("\n Enter A value : ");
	scanf("%d",&a);

	printff("\n Enter A value : ");
	scanf("%d",&b);

	if(a>b)
		printff("\n A is Big %d",a);
}




if(a>b && a>c)
	printff("\n A is Big  %d ",a);
else 
if(b>a && b>c)
	printff("\n B is Big %d ",b);
else 
printff("\n C is Big %d ",c);




#include<stdio.h>

void main()
{

float tot,avg,high,low,tel,eng,mat,sci,soc,hin;
printf("\n Enter Telugu Subject Marks");
scanf("%f",&tel);
printf("\n Enter English Subject Marks");
scanf("%f",&eng);
printf("\n Enter mats Subject Marks");
scanf("%f",&mat);
printf("\n Enter Science Subject Marks");
scanf("%f",&sci);
printf("\n Enter Social Subject Marks");
scanf("%f",&soc);
printf("\n Enter Hindi Subject Marks");
scanf("%f",&hin);
tot=tel+eng+mat+sci+soc+hin;
printff("\n\n The Total Six subjects Marks are %f",tot);
avg=tot/6;
printff("\n\n The Average of  Six subjects Marks are %f",avg);

//finding Highest Marks in 6 subjects

if(tel>eng && tel>mat && tel>sci && tel>soc && tel>hin)
	printf("\n Telugu Subject is highest marks in 6 subjects %f ",tel);
else 
if(eng>tel && eng>mat && eng>sci && eng>soc && eng>hin)
printf("\n English Subject is highest marks in 6 subjects %f ",eng);
else 
if(mat>tel && mat>eng && mat>sci && mat>soc && mat>hin)

	printf("\n mats Subject is highest marks in 6 subjects %f ",mat);
else 
if(sci>tel && sci>eng && sci>mat && sci>soc && sci>hin)

printf("\n Telugu Science is highest marks in 6 subjects %f ",sci);
else 
if(soc>tel && soc>eng && soc>mat && soc>sci && soc>hin)
	printf("\n Social Subject is highest marks in 6 subjects %f ",soc);
else 
if(hin>tel && hin>eng && hin>mat && hin>sci && hin>soc)
	printf("\n Hindi Subject is highest marks in 6 subjects %f ",hin);

//find Lowest Marks in 6 Six Subjects

if(tel<eng && tel<mat && tel<sci && tel<soc && tel<hin)
	printf("\n Telugu Subject is Lowest marks in 6 subjects %f ",tel);
else 
if(eng<tel && eng<mat && eng<sci && eng<soc && eng<hin)
printf("\n English Subject is Lowest marks in 6 subjects %f ",eng);
else 
if(mat<tel && mat<eng && mat<sci && mat<soc && mat<hin)

	printf("\n mats Subject is Lowest marks in 6 subjects %f ",mat);
else 
if(sci<tel && sci<eng && sci<mat && sci<soc && sci<hin)

printf("\n Telugu Science is Lowest marks in 6 subjects %f ",sci);
else 
if(soc<tel && soc<eng && soc<mat && soc<sci && soc<hin)
	printf("\n Social Subject is Lowest marks in 6 subjects %f ",soc);
else 
if(hin<tel && hin<eng && hin<mat && hin<sci && hin<soc)
	printf("\n Hindi Subject is Lowest marks in 6 subjects %f ",hin);


if(tel<35)
	printf("Telugu Subject Faild")

if(eng<35)
	printf("English Subject Faild")

if(mat<35)
	printf("mats Subject Faild")

if(sci<35)
	printf("Science Subject Faild")

if(soc<35)
	printf("Social Subject Faild")

if(hin<35)
	printf("Hindi Subject Faild")


}




Check if a number is even or odd:

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}



Check if a number is positive, negative, or zero:

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}



Check if a person is eligible to vote (based on age):

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote yet.\n");
    }

    return 0;
}



Find the maximum of three numbers:

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}



Check if a year is a leap year or not:

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}



Check if a character is a vowel or consonant:

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}


Check if a triangle is equilateral, isosceles, or scalene based on sides:

#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("It is an isosceles triangle.\n");
    } else {
        printf("It is a scalene triangle.\n");
    }

    return 0;
}




Check if a number is positive and even:

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("%d is positive and even.\n", num);
        } else {
            printf("%d is positive but odd.\n", num);
        }
    } else {
        printf("%d is not a positive number.\n", num);
    }

    return 0;
}



Check if a number is divisible by both 5 and 11:

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", num);
    }

    return 0;
}




 ### Check if a number is a prime number:

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}



Check if a year is a leap year without using nested if-else:

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}




Check if a number is positive, negative, or zero using a switch statement:

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0 ? 1 : num < 0 ? -1 : 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case -1:
            printf("%d is negative.\n", num);
            break;
        case 0:
            printf("You entered zero.\n");
            break;
    }

    return 0;
}




Check if a number is a palindrome:

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}



Check if a number is perfect, abundant, or deficient:


#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else if (sum > num) {
        printf("%d is an abundant number.\n", num);
    } else {
        printf("%d is a deficient number.\n", num);
    }

    return 0;
}




total
avg
passed subjects
highest marks in subject
lowest marks in six subjects




















