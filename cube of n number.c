#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the integers: ");
scanf("%d",&n);
for(i=1; i<=n; i++){
sum+=i*i*i;
}
printf("sum and cube numbers%d\n",sum);
return 0;
}