//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
#include<string.h>
enum userroles {ADMIN, USER, GUEST};
int main()
{
    enum userroles role;
    char s[10];
    printf("enter your USER ROLE : ");
    scanf("%s",s);
    if(strcmp(s,"ADMIN")==0)
    {
        role=ADMIN;
    }
    else if(strcmp(s,"USER")==0)
    {
        role=USER;
    }
    else if(strcmp(s,"GUEST")==0)
    {
        role=GUEST;
    }
    else
    {
        printf("Invalid Role\n");
        return 1;
    }
    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}