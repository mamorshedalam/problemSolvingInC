#include <stdio.h>
#include <math.h>

int main()
{
     int a, b;

     printf("Enter the value of A: ");
     scanf("%d", &a);

     printf("Enter the value of B: ");
     scanf("%d", &b);

     int result = pow(a, b) + pow(b, a);

     printf("%d", result);
     return 0;
}