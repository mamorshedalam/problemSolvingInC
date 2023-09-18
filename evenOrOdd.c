#include <stdio.h>
#include <math.h>

int main()
{
     int num;

     printf("Enter the number: ");
     scanf("%d", &num);

     int result = num % 2;
     if (result == 0)
     {
          int result = pow(4,3);
          
          printf("%d", result);
     }
     else
     {
          printf("The number is odd");
     }
}