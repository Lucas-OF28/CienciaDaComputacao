#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
main()
{
	int i, cont=0;
	char nome[20];
	printf("Informe um nome: ");
	gets(nome);
	for(i=0;nome[i]!='\0';i++)
	{
		if(toupper(nome[i])=='A')
		{
			nome[i]='B';
			cont++;
		}
		nome[i]=toupper(nome[i]);
	
	}
	printf("\nNovo nome: %s", nome);
	printf("\nNumero de caracteres modificados: %d", cont);
	getch();
}
