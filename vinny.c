/*
    County Library System,
    by,Vincent,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <stdlib.h>

struct Patron

{
    char name[100];
    char email[50];
    char password[30];
    int is_staff;
};

int menu();

void add_patron()
{
    struct Patron patron;
    printf("enter Name: ");
    getchar();
    gets(patron.name);
    printf("enter email: ");
    gets(patron.email);
    printf("enter initial password: ");
    gets(patron.password);
    printf("enter 1 if staff 0 otherwise: ");
    scanf("%d", &patron.is_staff);
    printf("Patron %s successfully added\n", patron.name);
}

int main()
{
    char title[100] = "County Library Management";
    char status[100] = "welcome vincent";
	execute_action(menu());
    int action;

    printf("\n\n\n\t\t\t   ****************\n\t\t\t%s\n \t\t\t\    %s\n\t\t\t   ****************\n", title, status);
    menu();
	return 0;
}

int menu ()
 {
    int action;

    printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. view all patrons\n");
    printf("3. Add new resources\n");
    printf("4. View all resources\n");
    printf("Your actions: \n");
    scanf("%d", &action);
    if(action < 1 || action > 4)
    {
    	printf("invalid action\n");
	}
	return action;
}
void execute_action(int action)
{
    printf("Choice is: %d\n", action);
    switch(action) {
    case 1:
        printf(" Add new Patron\n");
        break;
    case 2:
        printf(" view all patrons\n");
        break;
    case 3:
        printf(" Add new resources\n");
        break;
    case 4:
        printf(" View all resources\n");
        break;
    default:
        printf("Wrong Entry.");

    }
}
