#include<stdio.h>
void main()
{
int p=0,q=66;
for(int a=1;a<=5;a++)
{
for(int b=97;b<=97+p;b++)
{
printf("%c",b);
}
for(int c=q;c<=70;c++)
{
printf("%c",c);
}
printf("\n");
p++;
q++;
}
}
