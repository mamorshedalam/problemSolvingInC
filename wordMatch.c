#include <stdio.h>
#include <string.h>

// reverse a string
void reverseWord(char *revWord);

int main()
{
     char inpWord[1024], revWord[1024];

     printf("Input word: ");
     scanf("%s", &inpWord);

     strcpy(revWord, inpWord);
     reverseWord(revWord);

     printf("--------------------------------------------------------------------\n");
     printf("Reversed word: %s\n", revWord);

     int isWordMatch = strcmp(revWord, inpWord);
     if (isWordMatch == 0)
     {
          printf("%s and %s are matched!", inpWord, revWord);
     }
     else
     {
          printf("%s and %s are not matched!", inpWord, revWord);
     }

     return 0;
}

void reverseWord(char *revWord)
{
     int length = strlen(revWord);
     int i, j;
     char temp;

     for (i = 0, j = length - 1; i < j; i++, j--)
     {
          temp = revWord[i];
          revWord[i] = revWord[j];
          revWord[j] = temp;
     }
}
