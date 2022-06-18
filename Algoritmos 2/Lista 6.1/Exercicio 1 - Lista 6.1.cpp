#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>

main()
{
	FILE *arq;
	char letra;
	int cont=0;
	arq=fopen("vogal.txt", "r");
	while(!feof(arq))
	{
		letra=fgetc(arq);
		if(toupper(letra)=='A'||toupper(letra)=='E'||toupper(letra)=='I'||toupper(letra)=='O'||toupper(letra)=='U')
		{
		 	cont++;
		}	
	}
	fclose(arq);
	printf("Quantidade de vogais: %d", cont);	
}
