#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GamePlay(){
    char cName, cChoice;
    int nChoice;

    printf("Enter the first letter of your name? ");
    scanf(" %c", &cName);
    
    printf("Hi %c! Let's start the game!\n", cName);
    printf("[S] Start the Game\n");
    printf("[X] Exit the Game\n");

    printf("Enter here: ");
    scanf("%c", &cChoice);

    return 0;
}

char ShowLevel(){
    
    return 0;
}

int ViewScore(){


    return 0;
}

int RNG(){
    int num1, num2, upper, lower;
    lower = 1;
    upper = 100;

    srand(time(NULL));
    num1 = (rand() % (upper - lower + 1)) + lower;
    num2 = (rand() % (upper - lower + 1)) + lower;

    printf("Random Number 1: %d\n", num1);
    printf("Random Number 2: %d\n", num2);
    
    return 0;
}

void OpenMenu(char *cChoice){
    int nChoice;

    nChoice = 0; // if nChoice = 1, choice is valid, if 0 it's invalid

    printf("Welcome to the Random Numbers Game!\n");
    printf("[E] Enter the Game\n");
    printf("[V] View the Current Score\n");
    printf("[X] Exit the Game\n");

while (nChoice = 0){
    printf("Answer: ");
    scanf(" %c", cChoice);

    Choice_Action(&cChoice, &nChoice);
    }
}

void Choice_Action (char *cChoice, int *nChoice){

        switch (*cChoice){
        case 'E':
            GamePlay();
            *nChoice = 1;
            break;

        case 'V':
            ViewScore();
            *nChoice = 1;
            break;
        
        case 'X':
            *nChoice = 1;
            break;

        case 'S':
            GamePlay();
            break;

        default:
            printf("Invalid Choice");
            nChoice = 0;
            break;
        }
        
}
int main (){
    char cName, cChoice;

    OpenMenu(&cChoice);


    return 0;
}
