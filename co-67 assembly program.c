#include<stdio.h>
void main()
{
int a=10, b=20, c;
asm {
printf("RA2211042010046\n");
mov ax,a
mov bx,b
add ax,bx
mov c,ax
}
printf("c=%d", c);
}
