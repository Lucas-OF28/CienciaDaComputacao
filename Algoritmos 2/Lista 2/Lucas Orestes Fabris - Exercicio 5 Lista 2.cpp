#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
	printf("\nTotal de palavras: %d", palavra);
	getch(); 
	
	
	
}

