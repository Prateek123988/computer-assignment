#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the real a,c and imaginary c,d parts\n");
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
float x,y;
x=a+c;
y=c+d;
printf("sum is %f+%fi",x,y);
}
