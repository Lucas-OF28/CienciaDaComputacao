#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int i,tam=0, cont=0;
	char palavra[20];
	printf("Digite uma palavra: ");
	gets(palavra);
	tam=strlen(palavra);
	for(i=0;i<tam;i++)
	{
		if(palavra[i]!='\0');
		{
			cont++;
		}
	}
	printf("Quantidade de caracteres: %d", cont);
	getch();
}
