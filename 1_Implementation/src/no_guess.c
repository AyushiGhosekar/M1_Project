#include<stdio.h>

extern int random_number();
int random()
{
    
    int original_number;
    int guess_number;
    original_number= random_number(100); 
    printf("\nGuess a number between 1 to 100\n");
    printf("\nYou have 5 chance to Guess number\n");
    printf("\nenter positive number\n");
    for (int i=0; i<=5; i++)
    {
        scanf("%d",&guess_number);
        if(guess_number<original_number)
        {
            printf("\nEnter value is low\n");
        }
        else if(guess_number>original_number)
        {
            printf("\nEnter value is high\n");
        }
    
        else if(guess_number==original_number)
        {
            printf("\ncongrulation you have enter a right number\n");
        }
        else{
            printf("\n you have enter invalid number\n");
        }
    }
    return 0;
}
