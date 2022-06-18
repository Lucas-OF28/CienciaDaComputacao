#include<conio.h>
#include<stdio.h>
main()

{
	int i;
	float soma=0, n1,n2;
	char nome[30];
	
	for(i=1;i<=2;i++)
	{
		printf("Nome: ");fflush(stdin); gets(nome);
		printf("Nota 1: ");scanf("%f",&n1);
		printf("Nota 2: ");scanf("%f",&n2);
		soma=n1+n2;
		printf("\nNome: %s\n", nome);
		printf("Primeira avaliacao: %f\n", n1);
		printf("Segunda avaliacao: %f\n", n2);
		printf("Media: %f\n", soma/2);
	
	}
	
	getch();
}
