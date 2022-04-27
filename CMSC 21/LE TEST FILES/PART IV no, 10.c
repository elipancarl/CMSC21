#include <stdio.h> //Preprocessor directive
#include <math.h>

int main(){  //function

    double x;
    double y = 1.00000; // Data type declararation
    double z;

    printf("Enter number: ");
    scanf("%lf", &x);  //stored input

    for(int i=0; i < 100000; i++){
    z = (y+(fabs(x)/y))/2;  //use of fabs manipulating answer into accurate root
    y = z;
    }

if (x >= 0){
    printf("Root Approximation: %.5lf\n", z);} //Since note is consistent of root value from data type size
else if (x < 0){
    printf("Root Approximation: %.5lfi\n", z);}

return 0;
}
