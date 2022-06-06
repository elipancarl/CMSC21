/*Check planet names*/

#include <stdio.h> // for input and output
#include <stdlib.h> // for system pausing
#include <string.h> // for strcmp

#define NUM_PLANETS 9

/*main function will handle arguments from the command line, and will scan whether
a word input is a planet or not*/
int main(int argc, char* argv[]){
    /*The program returns on each terms in which is the closest distance from the sun(ranging 1 is the closest)
    because these are array in planets*/
    char *planets[] = {"Mercury", "Venus", "Earth",
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};


    int i, j; // declaring indexes for iteration

    for(i = 1; i < argc; i++){ // iterate for each word in the input in command line
        for(j = 0; j < NUM_PLANETS; j++){ // iterate through the array planets

            /*if the word is similar to a planet in the array, prompt the user, and
            include location from the Sun*/
            if(strcmp(argv[i], planets[j]) == 0){
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        // if the word is not found in the planet array, prompt the user
        if(j == NUM_PLANETS){
            printf("%s is not a planet\n", argv[i]);
        }
    }
    system("PAUSE");
    return 0;
}
