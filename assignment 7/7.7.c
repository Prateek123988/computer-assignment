#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter coefficients of two vectors a,b,c,d,e,f");
scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
float x,y,z;
x=(b*f)-(e*c);
y=(d*c)-(a*f);
z=(a*e)-(b*f);
printf("vector product is %fi+%fj+%fz",x,y,z);
}

