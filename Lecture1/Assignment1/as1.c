#include <stdio.h>

int main(void){
    int input, remainder, result, divided; //Declaring varaibles an integers to make the result in whole number and consistent

    printf("Enter the 2 digit number: ");
    scanf("%d",&input); //Input asking number

    remainder = (input % 10) * 10; //Manipulating the number from modulo 10 times 10 + divided number
    divided = input / 10;
    result = divided + remainder;

    printf("Reversed digit: %d", result); //display result

}

