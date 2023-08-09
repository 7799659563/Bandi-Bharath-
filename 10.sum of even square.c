#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the integers: ");
scanf("%d",&n);
for(i=0; i<=n; i++){
if(i%2 == 0){
sum+=i;
}
}
printf("sum of the even square number%d\n",sum);
return 0;
}