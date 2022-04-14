#include <stdio.h>
int main(void)
{
    int i;
         i = 10;
         while (i < 10) {
         printf("%d ", i);
         i ++;
        //Output is: None
        }
         printf("\n");

         i = 10;
         for (; i < 10; i++)
          printf("%d ", i);
           printf("\n");

        //Output is: None

         i = 10;
          do {
                i++;
                printf("%d ", i);
          }
          while (i < 10);


    //Output is: Executed Once

          return 0;
        }

