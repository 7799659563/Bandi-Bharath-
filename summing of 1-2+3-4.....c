//summing up 1-2+3-4+5...N
#include<stdio.h>
int main()
{
int i,n,sum=0,sign=1;
printf("enter the number: ");
scanf("%d",&n);
for(i=1; i<=n; i++){
sum+=sign*i;
sign*= -1;
}
printf("sum of the series: %d\n",sum);
return 0;
}