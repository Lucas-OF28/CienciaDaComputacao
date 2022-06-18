#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	int i, tam, palavra=1;
	char frase[50];
	printf("Informe uma frase: ");
	fflush(stdin);
	gets(frase);
	tam=strlen(frase);
	for(i=0; i<strlen(frase);i++)
	{
	
		if(frase[i]==' ')
		{
			palavra++;
		}
	}
	printf("Total de palavras: %d", palavra);
	getch();
	
	
}

