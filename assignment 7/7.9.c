#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the real a,c and imaginary b,d parts\n");
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
float x,y;
x=(a*c)+(b*d);
y=(a*d)+(b*c);
printf("product is %f+%fi\n",x,y);
float p,q;
p=((a*c)+(b*d))/(c*c+d*d);
q=((b*c)-(a*d))/(c*c+d*d);
printf("division is %f+%fi",p,q);
}

