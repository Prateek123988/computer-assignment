#include<stdio.h>
void main()
{
int p=65,m=1;
for(int a=65;a<=70;a++)
{
for(int b=p;b<=70;b++)
{
printf("%c",b);
}
printf("\n");
for(int c=1;c<=m;c++)
{
printf(" ");
}
m++;
p++;
}
}
