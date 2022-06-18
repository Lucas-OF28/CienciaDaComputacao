#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
main()
{
	int i=0, tam=0;
	char frase[50];
	fflush(stdin);
	printf("Informe uma frase: ");
	gets(frase);
	tam=strlen(frase);
	frase[i]=toupper(frase[i]);
	for(i=0;i<tam;i++)
	{
		if(frase[i-1]== ' ')
		{
			frase[i]=toupper(frase[i]);
		}
		
	}
	printf("%s", frase);
	getch();
}

