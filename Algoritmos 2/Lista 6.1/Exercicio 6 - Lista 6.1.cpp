//6)Elabore um programa que receba dois arquivos do us uá rio , e crie um terceiro ar quivo com o
//conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

main()
{
	FILE *arq1, *arq2, *final;
	char letra;
	arq1=fopen("arquivo1.txt", "r");
	arq2=fopen("arquivo2.txt", "r");
	final=fopen("final.txt", "w");
	while(!feof(arq1))
	{
		letra=fgetc(arq1);
		putc(letra, final);
	}
	while(!feof(arq2))
	{
		letra=fgetc(arq2);
		putc(letra, final);
	}
	
	
	fclose(arq1);
	fclose(arq2);
	fclose(final);
	system("pause");
}
	
