#include<stdio.h>
#include<stdlib.h>

void main()
{

float tot,avg,high,low,tel,eng,mat,sci,soc,hin;
system("cls");
printf("\n Enter Telugu Subject Marks  ");
scanf("%f",&tel);
printf("\n Enter English Subject Marks  ");
scanf("%f",&eng);
printf("\n Enter mats Subject Marks  ");
scanf("%f",&mat);
printf("\n Enter Science Subject Marks  ");
scanf("%f",&sci);
printf("\n Enter Social Subject Marks  ");
scanf("%f",&soc);
printf("\n Enter Hindi Subject Marks  ");
scanf("%f",&hin);


system("cls");
printf("\n\n\n\n");
printf("===============================================");
printf("\n Obtained Marks in Six Subjects ");
printf("===============================================");

printf("\n\n Given Telugu Subject Marks are %f ",tel);
printf("\n\n Given English Subject Marks are %f",eng);
printf("\n\n Given Mats Subject Marks are %f ",mat);
printf("\n\n Given Science Subject Marks are %f",sci);
printf("\n\n Given Social Subject Marks are %f ",soc);
printf("\n\n Given Hindi Subject Marks are %f ",hin);
printf("\n\n\n\n");
printf("\n===============================================");
printf("\nTotal Marks in Six Subjects ");
printf("\n===============================================");
tot=tel+eng+mat+sci+soc+hin;
printf("\n\n The Total Six subjects Marks are  %f ",tot);

printf("\n\n\n\n");
printf("\n===============================================");
printf("\n Average Marks in Six Subjects ");
printf("\n===============================================");
avg=tot/6;
printf("\n\n The Average of  Six subjects Marks are %f  ",avg);
printf("\n\n\n\n");
//finding Highest Marks in 6 subjects
printf("\n===============================================");
printf("\n Highest Subject Marks in Six Subjects ");
printf("\n===============================================");

if(tel>eng && tel>mat && tel>sci && tel>soc && tel>hin)
	printf("\n\n\nTelugu Subject is highest marks in 6 subjects %f ",tel);

else if(eng>tel && eng>mat && eng>sci && eng>soc && eng>hin)
    printf("\n\n\nEnglish Subject is highest marks in 6 subjects %f ",eng);

else if(mat>tel && mat>eng && mat>sci && mat>soc && mat>hin)

	printf("\n\n\nMaths Subject is highest marks in 6 subjects %f ",mat);
else if(sci>tel && sci>eng && sci>mat && sci>soc && sci>hin)
    printf("\n\n\nScience is highest marks in 6 subjects %f ",sci);

else if(soc>tel && soc>eng && soc>mat && soc>sci && soc>hin)
	printf("\n\n\nSocial Subject is highest marks in 6 subjects %f ",soc);
else if(hin>tel && hin>eng && hin>mat && hin>sci && hin>soc)
	printf("\n\n\nHindi Subject is highest marks in 6 subjects %f ",hin);
printf("\n\n\n\n");
//find Lowest Marks in 6 Six Subjects
printf("\n===============================================");
printf("\n Lowest Subject Marks in Six Subjects ");
printf("\n===============================================");

if(tel<eng && tel<mat && tel<sci && tel<soc && tel<hin)
	printf("\n\n\nTelugu Subject is Lowest marks in 6 subjects %f ",tel);
else
if(eng<tel && eng<mat && eng<sci && eng<soc && eng<hin)
printf("\n\n\nEnglish Subject is Lowest marks in 6 subjects %f ",eng);
else
if(mat<tel && mat<eng && mat<sci && mat<soc && mat<hin)

	printf("\n\n\nMaths Subject is Lowest marks in 6 subjects %f ",mat);
else
if(sci<tel && sci<eng && sci<mat && sci<soc && sci<hin)

printf("\n\n\nTelugu Science is Lowest marks in 6 subjects %f ",sci);
else
if(soc<tel && soc<eng && soc<mat && soc<sci && soc<hin)
	printf("\n\n\nSocial Subject is Lowest marks in 6 subjects %f ",soc);
else
if(hin<tel && hin<eng && hin<mat && hin<sci && hin<soc)
	printf("\n\n\nHindi Subject is Lowest marks in 6 subjects %f ",hin);
printf("\n\n\n\n");
printf("\n===============================================");
printf("\n Failed Subjects in Six Subjects ");
printf("\n===============================================");
if(tel<35)
	printf("\n\nTelugu Subject Failed %f ",tel);

if(eng<35)
	printf("\n\nEnglish Subject Failed %f",eng);

if(mat<35)
	printf("\n\nMaths Subject Failed %f ",mat);

if(sci<35)
	printf("\n\nScience Subject Failed %f",sci);

if(soc<35)
	printf("\n\nSocial Subject Failed %f ",soc);

if(hin<35)
	printf("\n\nHindi Subject Failed %f ",hin);

getch();
}
