#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int GamePlay(){
    char cName, cChoice;

    printf("Enter the first letter of your name? ");
    scanf("%c", &cName);
    
    printf("Hi %c! Let's start the game!\n", cName);
    printf("[S] Start the Game\n");
    printf("[X] Exit the Game\n");

    printf("Enter here: ");
    scanf("%c", &cChoice);

    switch (cChoice){
        case 'S':
            GamePlay();
            break;

        case 'X':
            OpenMenu(&cChoice);
            break;
    }

    return 0;
}

char ShowLevel(){
    
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
    printf("Welcome to the Random Numbers Game!\n");
    printf("[E] Enter the Game\n");
    printf("[V] View the Current Score\n");
    printf("[X] Exit the Game\n");

    printf("Answer: ");
    scanf(" %c", cChoice);
    
}

int main (){
    char cName, cChoice;

    OpenMenu(&cChoice);
    

    return 0;
}
