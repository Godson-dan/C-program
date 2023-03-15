#include <stdio.h>
/**
 * main - prompt user to personal details 
 * 
 * Return: Always 0.
*/
int main(void)
{
    char Firstname[100], lastname[100], username[100], emailaddress[100], nationality[100], password[100];
    char D.O.B[100], confirmpassword[100];
    printf("Enter First Name Below:\n");
    fgets(firstname, 100, stdin);
    printf("Enter Last Name Below:\n");
    fgets(lastname, 100, stdin);
    printf("Enter Username:\n");
    fgets(username, 100, stdin);
    printf("Enter Email Address:\n");
    fgets(emailaddress, 100, stdin);
    printf("Enter Nationality:\n");
    fgets(nationality, 100, stdin);
    printf("Enter Password:\n");
    fgets(password, 100, stdin);
    printf("Confirm Password:\n");
    fgets(confirmpassword, 100, stdin);
    printf("Enter D.O.B in this format'Day|Month|Year:\n");
    fgets(D.O.B, 100, stdin);
    printf("Click Enter to 'Signup'");
    printf("%s", firstname);
    printf("%s", lastname);
    printf("%s", username);
    printf("%s", emailaddress);
    printf("%s", nationality);
    printf("%s", password);
    printf("%s",D.O.B);

    return 0;
}