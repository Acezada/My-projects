
#include <stdio.h>
main() // aqui comeca o codigo principal
{
char necessidade;
unsigned short int idade;
float renda;
char data[15];
char cpf[20];
char nome[30];
char endereco[50];
printf("Formulario para Entrada de Dados\n");
printf("================================\n\n");
printf("Digite o nome = ");
gets(nome);
printf("Digite a idade = ");
scanf("%hu", &idade);
getchar();
printf("Digite o endereco = ");
gets(endereco);
printf("Digite a renda = ");
scanf("%f", &renda);
getchar();
printf("Digite o CPF = ");
gets(cpf);
printf("Digite a data de nascimento = ");
gets(data);
printf("Portador(a) de necessidades especiais (S/N) = ");
necessidade = getche();
printf("\n\nExibindo as informacoes\n");
printf("=========================\n\n");
printf("Nome digitado = %s\n", nome);
printf("Idade digitada = %hu\n", idade);
printf("Endereco digitado = %s\n", endereco);
printf("Renda digitada = %5.2f\n", renda);
printf("CPF digitado = %s\n", cpf);
printf("Data digitada =%s\n", data);
printf("Necessidades especiais = %c\n\n", necessidade);
}
