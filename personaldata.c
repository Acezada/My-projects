
#include <stdio.h>
main() // Here starts the main code
{
char needs;
unsigned short int age;
float income;
char date[15];
char cpf[20];
char name[30];
char address[50];
printf("Data Entry Form\n");
printf("================================\n\n");
printf("Enter name = ");
gets(name);
printf("Enter age = ");
scanf("%hu", &age);
getchar();
printf("Enter the address = ");
gets(address);
printf("Enter income = ");
scanf("%f", &income);
getchar();
printf("Enter CPF = ");
gets(cpf);
printf("Enter date of birth = ");
gets(date);
printf("Person with special needs (Y/N) = ");
needs = getche();
printf("\n\nDisplaying the information\n");
printf("=========================\n\n");
printf("Entered name = %s\n", name);
printf("Entered age = %hu\n", age);
printf("Entered address = %s\n", address);
printf("Typed income = %5.2f\n", income);
printf("Entered CPF = %s\n", cpf);
printf("Date entered =%s\n", date);
printf("Special needs = %c\n\n", needs);
}
