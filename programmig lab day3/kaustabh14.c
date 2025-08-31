//date-25/08/25
// write a c program to find out floor and ceiling value of a positive and negative numbers

#include<stdio.h>
#include<math.h>
int main() {
	float num1,num2,f1,c1,f2,c2;
	printf("enter a positive number :");
	scanf("%f",&num);
	f1=floor(num1);
	c1=ceil(num1);
  printf("enter a negative number :");
	scanf("%f",&num2);
	f2=floor(num2);
	c2=ceil(num2);
	printf("floor value for positive number is :%f",f1);
	printf("ceiling value for positive number is :%f",c1);
 printf("floor value for negative number is :%f",f2);
	printf("ceiling value for negative is :%f",c2);
	return 0;
}