#include<stdio.h>
int main()
{
int n,x,y;
int p=0;
printf("enter the value of n\n");
scanf("%d",n);
for(int a=1;a<=n;a++)
{
printf("enter a no.\t");
scanf("%d",&y);
p=p+y;
}
printf("the sum is %d",p);
return 0;
}
