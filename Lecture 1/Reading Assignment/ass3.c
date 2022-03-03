#include <stdio.h> //Preprocessor Directive

int main(void) //Main function.
{
    int num1, denom1, num2, denom2, result_num, result_denom; //Declares the variables as integers data type.

    printf("Enter first fraction: "); //Display the statement to the user.
    scanf("%d/%d", &num1, &denom1); /* This allow user to input a value because of scanf function will.
                                       the input value will be stored in num1 and denom1.
                                       the ampersand function so the user will use
                                       input a fraction using "/" this will separate the two integers
                                       and become a fraction.*/


    printf("Enter second fraction: "); //Relative to line 7-8.
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1; /*Manipulating the variables so we multiply as we use * and to
                                                  add is +. The result number
                                                  of the equation will be stored in the variable result_num.*/
    result_denom = denom1 * denom2; //Relative to line 18 multiplying the value of two variables.
    printf("The sum is %d/%d\n", result_num, result_denom); //This will display the sum of the two fractions inputted by the user.

    return 0; //End then Return after the success execution to the called function
}
