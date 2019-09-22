#include<stdio.h>
void main()
{
int p=0,q=0;
for(int a=1;a<=6;a++)
{
for(int b=65;b<=65+p;b++)
{
printf("%c",b);
}
for(int c=97;c<=101-q;c++)
{
printf("%c",c);
}
printf("\n");
p++;
q++;
}
}

