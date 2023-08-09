#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the upper case number: ");
scanf("%d",&n);
for(i=1; i<=n; i+=2){
sum+=i;
}
printf("%d",sum);

return 0;
}
