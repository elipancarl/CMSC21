#include<stdio.h>
#include<math.h> //Directive preprocessor and sqrt from the mods

struct Test {
    float x_1, x_2, y_1, y_2, slope, midpoint1, midpoint2, gdistance, c; //Data Type declarartion

};

int main() {

    struct Test t; // Structure Declaration
    printf("\t Enter two x,y coordinates : ");
    scanf("%f %f", &t.x_1,&t.y_1);      //input of two structured variables
    printf("\t Enter another two coordinates : ");
    scanf("%f %f", &t.x_2,&t.y_2);


    t.slope = (t.y_2 - t.y_1) / (t.x_2 - t.x_1);
    t.midpoint1 = (t.x_1 + t.x_2) / 2;      //Formula of variables manipulation
    t.midpoint2 = (t.y_1 + t.y_2) / 2;

    t.gdistance = ((t.x_2 -t.x_1)*(t.x_2-t.x_1))+((t.y_2-t.y_1)*(t.y_2-t.y_1));
    t.c = t.y_2-(t.slope*t.x_2);



    printf("The slope is : %f \n", t.slope);        //Displaying the outputs
    printf("Mid Point = %f , %f  \n",t.midpoint1,t.midpoint2);
    printf("Distance between the said points: %.4f \n", sqrt(t.gdistance));
    printf("slope intercept form (y)= %.2f (x) + (%.2f) \n",t.slope,t.c);


    return 0;
}
