#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float x;
printf("enter the vector ai+bj+ck");
scanf("%d,%d,%d",&a,&b,&c);
x=sqrt(a*a+b*b+c*c);
printf("the unit vector is %di+%dj+%dk/%f",a,b,c,x);
}
