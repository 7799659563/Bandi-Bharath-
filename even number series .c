#include<stdio.h>
int main()
{
int n,i;
printf("print all the even number to till: ");
scanf("%d",&n);
printf("even number from 1to %d are: \n",n);
for(i=1; i<=n; i++)
{
if(i%2 == 0) 
{
printf("%d",i);
}
}
return 0;
}