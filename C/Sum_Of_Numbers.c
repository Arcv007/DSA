// write a program to print the sum and the avarage of the three numbers
#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c,sum,avg;
 printf("Enter the value of the three numbers:\n");
 scanf("%d%d%d",&a,&b,&c);
 sum=a+b+c;
 printf("\nsum of numbers is %d",sum);
 avg=sum/3;
 printf("\navarage of numbers is %d",avg);
}