#include<stdio.h>
int main()
{

int marks;
printf("ENTER MARKS : ");
scanf("%d" , &marks);


if(marks>90 && marks<=100)
{
printf("GRADE A\n");
}

else if(marks>80 && marks<=90)
{
printf("GRADE B\n");
}

else if(marks>70 && marks<=80)
{
printf("GRADE C\n");
}

else if(marks>60 && marks<=70)
{
printf("GRADE D\n");
}

else
{
printf("GRADE F\n");
}
return 0;
}

