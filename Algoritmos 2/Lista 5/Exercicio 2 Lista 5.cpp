#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct Aluno
{
	char nome[50], email[50];
	int dia, mes, ano;
	float notas[5];
} alunos[5];

main()
{
	int cont, cont2;
	float soma;
	
	for(cont=0;cont<1;cont++)
	{
		printf("Nome: ");
		scanf("%s",&alunos[cont].nome);
		printf("Email: ");
		scanf("%s", &alunos[cont].email);
		printf("Nascimento: ");
		printf("\nDia: ");
		scanf("%d", &alunos[cont].dia);
		printf("Mes: ");
		scanf("%d", &alunos[cont].mes);
		printf("Ano: ");
		scanf("%d", &alunos[cont].ano);
		
		for(cont2=0; cont2 < 5; cont2++) 
		{ 
		printf("\nNota %d: ", cont2);
		scanf("%f", &alunos[cont].notas[cont2]);
		}
	}
	for(cont=0; cont < 1; cont++) 
	{
	printf("Nome: %s", alunos[cont].nome);
	printf("\nEmail: %s", alunos[cont].email);
	printf("\nNascimento: %d/%d/%d", alunos[cont].dia, alunos[cont].mes, alunos[cont].ano);
	printf("\nIdade: %d", 2020 - alunos[cont].ano); 
	soma = 0;
	
		for(cont2=0; cont2 < 5; cont2++)
		{ 
		soma += alunos[cont].notas[cont2];
		}
		
	printf("\nMedia: %f", soma/5);
	}
	return 0;

}
