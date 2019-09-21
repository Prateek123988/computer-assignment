#include<stdio.h>
void main()
{
int x,y;
printf("enter the real and imaginary parts");
scanf("%d,%d",&x,&y);
if(x==0)
{
printf("%di",y);
}
else if(y==0)
{
printf("%d",x);
}
else if(y==1)
{
printf("%d+i",x);
}
else
{
printf("%d+%di",x,y);
}
}

