#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the integers: ");
scanf("%d",&n);
for(i=1; i<=n; i+=2){
sum+=i*i;
}
printf("sum and square of odd numbers%d\n",sum);
return 0;
}