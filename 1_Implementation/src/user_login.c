#include<stdio.h>
#include<string.h>
extern char login_log();

int user_log()
{
    int ch;
    printf("1.Login\n"); 
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
        login_log();
        break;

     /*   case 2:
        signup_log();
        break;*/

        default:
            printf("invalid entry!!");
        break;
    }
}