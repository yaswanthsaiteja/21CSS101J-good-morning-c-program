#include <stdio.h>
#include <ctype.h>
int main (void) {
 int c;
 printf("RA2211042010046\n");
 for ( ; ; ) {
 c = getchar();
 if (c == EOF) break;
 <process one character>
 }
 return 0;
} 
