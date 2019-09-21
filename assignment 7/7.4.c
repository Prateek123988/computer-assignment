#include<stdio.h>
void main()
{
int a,b,c,d;
float x,y;
printf("enter the co-ordinates (a,b) and (c,d)\n");
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
x=(a+c)/2;
y=(b+d)/2;
printf("(%f,%f)\n",x,y);
}
