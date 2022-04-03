#include <stdio.h>
#include <string.h>
int admin_log()
{
    char a_name[30];
    char a_pass[30];
    char a, b;
    //char admin_log(char a_name[30], char a_pass[30]);
    printf("Enter username: ");
    scanf("%s", a_name);
    printf("Enter password: ");
    scanf("%s", a_pass);
    if (strcmp(a_name, "Admin") == 0 && strcmp(a_pass, "pass") == 0)
        printf("Welcome Admin\n");
       // printf();
    else
        printf("Access denied\n");
    return 0;
}
