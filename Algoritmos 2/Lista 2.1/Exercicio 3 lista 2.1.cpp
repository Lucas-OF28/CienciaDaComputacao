#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	int i,j,tam=0;
	char frase[50], aux;
	printf("Informe uma frase: ");
	fflush(stdin);
	gets(frase);
	tam=strlen(frase);
	j=tam-1;
	for(i=0;i<tam/2;i++)
	{
		aux=frase[i];
		frase[i]=frase[j];
		frase[j]=aux;
		j--;
	}
	printf("\nFrase invertida: %s", frase);
	getch();
	
}
