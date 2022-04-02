#include<stdio.h>
int main(){
   int i,noofdays;
   int first;
   printf("enter no of days in a month:\n");
   scanf("%d",&noofdays);
   printf("enter starting day of the week:\n");
   scanf("%d",&first);

   if (noofdays >= 28 && noofdays <= 31 ){

       for(i=1;i<first;i++)
          printf("   ");
       for(i=1;i<=noofdays;i++){
          printf("%3d",i);
          if((first+i-1)%7==0)
             printf("\n");}
   }

    else {
        printf("Invalid Number");
    }

   return 0;
}
