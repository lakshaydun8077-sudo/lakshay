#include<stdio.h>
int main()
{
int sp , cp ;
printf("ENTER COST PRICE " );
scanf("%d" , &cp);
printf("ENTER SELLING  PRICE " );
scanf("%d" , &sp);

if (cp>sp){
printf("LOSS");
}
else if (cp==sp){
printf("NO PROFIT NO LOSS");
}
else{
printf("PROFIT");
}
return 0;
}

