#include <stdio.h>
int main()
{
 float miles, kilometers;
  printf("RA2211042010046\n");
  printf("Enter distance in Miles=");
  scanf("%f", &miles);
  kilometers = miles * 1.609;
  printf("%.2f Miles are equal to %.2f kilometers", miles,kilometers);
  return 0;
  }
