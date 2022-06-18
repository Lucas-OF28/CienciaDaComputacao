#include<stdio.h>
#include<stdlib.h>

struct Livro
{
	char nome[30];
	int pag;
	float preco;
} livro[5];

int main()
{
	int i, idade;
	float soma=0;
	
	for(i=0;i<5;i++)
	{   
		printf("informe o nome: ");
		scanf("%s", &livro[i].nome);
		printf("informe o numero de paginas: ");
		scanf("%d", &livro[i].pag);
		soma+=livro[i].pag;
	}
	printf("media de paginas: %f: ", soma/5);
	system("pause");
}
