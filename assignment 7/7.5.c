#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter the vectors ai+bj+ck, di+ej+fk\n");
scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
float x;
x=a*d+b*e+c*f;
printf("dot product is %f",x);
}
