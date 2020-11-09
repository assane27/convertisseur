#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int s,m,h;
printf("stp entrer le numero de seconds:\n");
scanf("%d",&s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf(" le nombre de second est equivalent a %dheur%dmin%dsec:\n",s,h,m);
return(0);

}