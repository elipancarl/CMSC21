#include<stdio.h>
     //1 is true and 0 is False//
int main(){
    int age, teenager;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 13 && age <= 19){
        teenager = 1;
    }
    else{
        teenager = 0;
    }
    printf("%d", teenager);
    return 0;
}
