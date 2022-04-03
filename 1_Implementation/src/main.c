#include <stdio.h>
extern int admin_log();
//     extern char user(char u_name[30], char u_pass[30]);
extern int user_log();

int main()
{
    char u_name[30], a_name[30], u_pass[30], a_pass[30];
    int choose;

    printf("how do you want to LOGIN \n1. Admin login\n2. User_login  \n ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        printf("\nADMIN LOGIN\n");
        admin_log();
        break;

    case 2:
        printf("\nUSER LOGIN\n");
        user_log();
        break;
    default:
        printf("\nClose\n");
        break;
    }
    return 0;
}