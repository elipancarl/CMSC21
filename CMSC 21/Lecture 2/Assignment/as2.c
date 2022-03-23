#include <stdio.h>

int main(void){
    int input, ones, tens, hundreds, result; //    Declaring variables to be used since its three digit divide parts into regions
    printf("Enter the 3 digit number: ");
    scanf("%d",&input); //input asking number

    ones = input %10;  /*Manipulating the number formulas modulo in each regions
                        then divided result is multiplied by 100 and 10 and sum up all*/
    tens = ((input/10)%10);
    hundreds = input/100;
    result = (ones*100)+(tens*10)+hundreds;

    printf("Reversed digit: %d", result); //display reverse
}

