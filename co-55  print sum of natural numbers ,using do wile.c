#include<stdio.h>
int main()
{
printf("RA2211042010046\n");
int n,sum=0;
printf("enter any no\n");
scanf("%d",&n);
do
{ 
sum=sum+1;
n--;
}
while(n>0);
printf("sum of natural numbers is %d\n",sum);
return 0;
}
