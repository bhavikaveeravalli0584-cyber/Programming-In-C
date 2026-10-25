#include <stdio.h>

int main(){
    int secret_number = 84 ;
    int guessed_number ;
    int attempts = 0 ;
    printf("Welcome to the Number Guessing Game!\n");

    printf("Guess a number between 1 to 100 \n\n");

    while (1) {
        printf("\n \nEnter a Number: \n\n ");
        scanf("%d",&guessed_number);
        attempts ++ ;

        if (guessed_number > secret_number){
            printf("Guessed Toooo high Bruhhhh!\n");
        }
        else if(guessed_number < secret_number){
            printf("Guessed Tooo low, Make a right guess Bruhh!\n ");
        }
        else{
            printf("Wow!,You've entered a correct number\n");
            printf("Your attempts %d : ",attempts) ;
            break ;
        }
    }
    return 0;

}