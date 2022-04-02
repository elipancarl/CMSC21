#include <stdio.h>
int main(void)
{
    int i;
         i = 0;
         while (i < 10) {
         printf("%d ", i);
         i ++;
        //Output is: 0 1 2 3 4 5 6 7 8 9
        }
         printf("\n");

         for (i = 0; i < 10; i++)
          printf("%d ", i);
           printf("\n");

        //Output is: 0 1 2 3 4 5 6 7 8 9

          do {
                i++;
          }
          while (i < 10);
         printf("%d ", i);

    //Output is: 11

          return 0;
        }

