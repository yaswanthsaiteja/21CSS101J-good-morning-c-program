#include<stdio.h>
int main()
{
int n;
printf("RA2211042010046\n");
printf("Enter the number of rows");
scanf("%d", &n);
for(int i=n;i>=1;i--)
{
for(int j=1;j<=i-1;j++)
{
printf("");
}
for(int k=1;k<=n;k++)
{
if(i==1 || i==n || k==1 || k==n)
frintf("*");
else
printf("");
}
printf("\n");
}
return 0;
}
