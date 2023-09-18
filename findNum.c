#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter number 1: ");
  scanf("%d", &num1);

  printf("Enter number 2: ");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    printf("The maximum number is: ");
    printf("%d\n", num1);
    printf("The minimum number is: ");
    printf("%d\n", num2);
  }
  else if (num1 < num2)
  {
    printf("The maximum number is: ");
    printf("%d\n", num2);
    printf("The minimum number is: ");
    printf("%d\n", num1);
  }
  else
  {
    printf("The numbers are equal.");
  }
}