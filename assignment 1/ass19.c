#include<stdio.h>
 void main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	int a,b,c;
	a=n%100;
	n=n/100;
	b=a%10;
	c=n*10+b;
	printf("%d",c);
}

