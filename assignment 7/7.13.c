#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the coefficients of i,j,k respectively\n");
scanf("%d,%d,%d",&a,&b,&c);
if(a==0)
{
if(b==0&&c==0)
printf("0");
else if(b==0&&c<0)
printf("%dk",c);
else if(b==0&&c==1)
printf("k");
else if(b<0&&c==0)
printf("%dj",b);
else if(b<0&&c<0)
printf("%dj%dk",b,c);
else if(b<0&&c==1)
printf("%dj+k",b);
else if(b==1&&c==0)
printf("j");
else if(b==1&&c<0)
printf("j %dk",c);
else if(b==1&&c==1)
printf("j+k");
}
else if(a<0||a>0)
{
if(b==0&&c==0)
printf("%di",a);
else if(b==0&&c<0)
printf("%di%dk",a,c);
else if(b==0&&c==1)
printf("%di+k");
else if(b<0&&c==0)
printf("%di %dj",a,b);
else if(b<0&&c<0)
printf("%di%dj%dk",a,b,c);
else if(b<0&&c==1)
printf("%di%dj+k",a,b);
else if(b==1&&c==0)
printf("%di+j",a);
else if(b==1&&c<0)
printf("%di+j%dk",a,c);
else if(b==1&&c==1)
printf("%di+j+k",a);
}
else if(a==1)
{
if(b==0&&c==0)
printf("i");
else if(b==0&&c<0)
printf("i%dk",c);
else if(b==0&&c==1)
printf("i+k");
else if(b<0&&c==0)
printf("i%dj",b);
else if(b<0&&c<0)
printf("i%dj%dk",b,c);
else if(b<0&&c==1)
printf("i %dj+k",b);
else if(b==1&&c==0)
printf("i+j");
else if(b==1&&c<0)
printf("i+j%dk",c);
else if(b==1&&c==1)
printf("i+j+k");
}
}
