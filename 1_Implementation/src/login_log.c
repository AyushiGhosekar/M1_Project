#include <stdio.h>
#include <string.h>

extern int random();

int login_log()
{
    char username[15];
    char password[12];

    printf("Enter your username:\n");
    scanf("%s", username);

    printf("Enter your password:\n");
    scanf("%s", password);

    if (strcmp(username, "chaitu") == 0)
    {
        if (strcmp(password, "123") == 0)
        {

            printf("\nWelcome.Login Success!\n");
            random();
        }
        else
        {
            printf("\nwrong password\n");
        }
    }
    else
    {
        printf("\nUser doesn't exist\n");
    }

    return 0;
}