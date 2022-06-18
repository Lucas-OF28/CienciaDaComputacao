#include<stdio.h>
#include<conio.h>
main()
{
	int idade;
	char nome[32];
	printf("Infome seu nome: ");
	gets(nome);
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("Nome: %s\nIdade: %d", nome, idade);
	getch();
		
}
