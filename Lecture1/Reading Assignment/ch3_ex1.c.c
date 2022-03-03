#include <stdio.h> //Preprocessor Directive

int main() //Main function.
{
    int i, j; //Declares i and j as integer variables.
    float x, y; //Declares x and y as float variables.

    //Line 9-12 assigning specific value in each variables and data types.
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*The printf suggest displaying the called variables value declare from 9-12 where a,
    %d for integers and %f for float representing its data type. It is called out by order
    where instructions from is placing the variables after the statement to be printed out accordingly(i, j, x, y).*/
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    return 0; //Return the function after the succes execution
