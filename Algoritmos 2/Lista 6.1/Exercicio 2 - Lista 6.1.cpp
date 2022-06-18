#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

main()
{
	FILE *arq;
	char letra;
	int cont=1;
	arq=fopen("arquivo1.txt", "r");
	printf("Quantas linhas o arquivo possui*!\n");
	while(!feof(arq))
	{
		letra=fgetc(arq);
		if(letra=='\n')
		{
			cont++;
		}
	
	}
	printf("Numero de linhas do arquivo: %d", cont);
	fclose(arq);
	system("pause");
	
	
}
