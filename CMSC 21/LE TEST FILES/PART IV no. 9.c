#include <stdio.h>
    int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    while(cont == 'y'){
        printf("Enter square size:");
        scanf("%d", &size);
        for( row = 0 ;row < size ; row++){ // To Manipulate the rows
            for(column = 0 ; column < size; column++){ // To Manipulate the column

                if (row == 0  || row == size -1 || column == 0 || column == size -1){
                printf("*");

                }else{
                printf(" ");
            }
    }

    printf("\n");
    }

        printf("Print another square? Enter y or n: ");
        scanf("%s", &cont);
    if (cont == 'n'){
        break;

    }else if (cont != 'y'){
        printf("Not a valid choice. \n");
        printf("Print another square? Enter y/n: ");
        scanf("%s", &cont);
            }
        }

        return 0;
    }
