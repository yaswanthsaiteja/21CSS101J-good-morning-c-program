#include<stdio.h>
void main() {
int num;
printf("Enter a number : ");
scanf("%d",&num);
if(num%3==0) {
printf("enter divisible by 3\n %d ",num);
}
else{
printf("it is not divisible by 3\n %d",num);
}
}
