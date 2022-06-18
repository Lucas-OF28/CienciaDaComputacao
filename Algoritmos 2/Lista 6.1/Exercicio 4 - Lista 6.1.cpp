//4) Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto contendo
//o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.	
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

main()
{
	FILE *arq, *copia;
	char letra;
	int cont=0;
	arq=fopen("teste_vogal.txt", "r");
	copia=fopen("codigo.txt", "w");
	printf("Gerando arquivo copia substituindo vogais por *!\n")
	while(!feof(arq))
	{
		letra=fgetc(arq);
		if(toupper(letra)=='A'||toupper(letra)=='E'||toupper(letra)=='I'||toupper(letra)=='O'||toupper(letra)=='U')
		{
			fputc('*', copia);
		}
		else
		{
			fputc(letra, copia);
		}
	}
	fclose(arq);
	fclose(copia);
	
	
}
