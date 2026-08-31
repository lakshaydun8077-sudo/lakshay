#include<stdio.h>
int main()
{
int a,b,c,d;
d = b*b - 4*a*c;
printf("abc");
scanf ("%d %d %d", &a,&b,&c);

if(d>0) 
{
printf("ROOTS ARE REAL AND DIFFERENT");
}
else if(d==0)
{
printf("ROOTS ARE REAL AND EQUAL");
}
else 
{
printf("ROOTS ARE IMAGINARY");
}
return 0;
}
