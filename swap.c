#include<stdio.h>
main()
{
	int a,b;
	printf("Enter any two numbers before swapping:");
	scanf("%d",&a);
	scanf("%d",&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("numbers after swapping are %d,%d",a,b);
}
