#include<stdio.h>
#include<stdbool.h>

#define SIZE 8 //define macro

int main(){
    //Initialize road_networks
    bool road_networks[SIZE][SIZE] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1}
    };

    // Column
    char col[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i = 0; i < 8; i++){
        if (i < 2 || i > 3){
            printf("      %c", col[i]);
        }
        else if (i == 2 || i == 3){
            printf("    [%c]", col[i]);
        }
    }
        printf("\nA     ");

    // Matrix
    for (int i = 0; i < SIZE; i++){ // Using for loop to print the Matrix. i == row
        for (int j = 0; j < SIZE; j++){
            printf("%i      ", road_networks[i][j]);
        }

    // Row Title
    char row[7] = {'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    if (i < 1 || i > 2){
        printf("\n%c     ", row[i]);
    }
    else if (i == 1 || i == 2){
        printf("\n[%c]   ", row[i]);
    }
    }

    // Input Starting Point
    int point;
    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &point);
    printf("At point: %c\n", col[point]);

    // Points Travelled to Nearest Charge Station
    for (int i = 0; i < SIZE; i++){
        if (road_networks[i][point] == 1){
            point = i;
            printf("Now at point: %c\n", col[i]);
        }
        else if (point == 6){
            point = 0;
            printf("Now at point: %c\n", col[i]);
        }
        else if (point == 2 || point == 3){
            break;
        }
    }

    // Printing Charge Station
    printf("Point: %c arrived to charging station", col[point]);

    return 0;
}
