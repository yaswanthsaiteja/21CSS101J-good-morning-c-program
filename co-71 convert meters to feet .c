#include <stdio.h>
void main() {
  float meter;
  float feet;
    clrscr();
        printf(" Program to convert Meter to Feet:  ");
        printf("\n\n Enter Length in Meters  : ");
	scanf("%f", &meter);
         feet = (meter*3.26);
         printf("\n\n %f meter in feet = %f  \n",meter,feet);
          getch();
 }
