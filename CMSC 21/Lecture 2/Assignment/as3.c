#include <stdio.h>

int main(void){
    int i, j, k;
    i=3, j=4, k=5; //a
    printf("a) %d\n\n", i<j || ++j<k);

    i = 7; j = 8; k = 9; //b
    printf("b) %d\n\n",i - 7 && j++ < k);

    i = 7; j = 8; k = 9; //c
    printf("c):%d\n", (i = j) || (j == k));
    printf("c_2)%d %d %d\n\n", i, j, k);

    i = j = k = 1; //d
    printf("d) %d\n", ++i || ++j && ++k);
    printf("d_2) %d %d %d\n", i, j, k);
}
