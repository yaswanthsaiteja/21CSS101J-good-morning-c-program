#include<stdio.h>
int main()
{
printf("RA2211042010046\n");
int num1 = 36, num2 = 60, hcf =1;
for(int i=1; i<= num1 || i <=num2; i++)
{
if(num1 %i==0 && num2 %i==0)
hcf=i;
}
printf("The HCF: %d", hcf);
return 0;
}
