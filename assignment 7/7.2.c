#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter the values of a,b,c,d,e,f\n");
scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
printf("%021d,%021d\n",a,b);
printf("%010d,%010d,%010d,%010d",c,d,e,f);
}
