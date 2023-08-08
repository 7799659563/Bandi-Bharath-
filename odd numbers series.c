#include<stdio.h>
int main()
{
int n,i;
printf("print all odd numbers: ");
scanf("%d",&n);
for(i=1; i<=n; i++){
if(i%2 == 1){
printf("%d \n",i);
}
}
return 0;
}
