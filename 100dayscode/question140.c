//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>
enum Gender {MALE,FEMALE,OTHER};
int main()
{
    enum Gender gender;
    char s[10];
    printf("Enter your GENDER : ");
    scanf("%s",s);
    if(strcmp(s,"MALE")==0)
    {
        gender=MALE;
    }
    else if(strcmp(s,"FEMALE")==0)
    {
        gender=FEMALE;
    }
    else if(strcmp(s,"OTHER")==0)
    {
        gender=OTHER;;
    }
    else
    {
        printf("Invalid Gender\n");
        return 1;
    }
    switch(gender)
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }   
    return 0;
}