#include <stdio.h>
void swapping (int *a, int *b, int *c);
int main() {
    int a, b, c;
    printf("RA2211042010046\n"); 
    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
    cyclicSwap(&a, &b)
    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);
    return 0;
}
