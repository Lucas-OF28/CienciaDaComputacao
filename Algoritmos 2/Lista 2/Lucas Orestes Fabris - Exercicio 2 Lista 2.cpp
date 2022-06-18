#include<conio.h>
#include<stdio.h>
#include<ctype.h>
main()
{
	char frase[50];
	int i, cont=0;
	printf("Informe uma frase: ");
	gets(frase);
	for(i=0;frase[i]!='\0';i++)
	{
		if(toupper(frase[i])=='X')
		cont++;
	}
	printf("Quantidades de letras X presentes: %d", cont);
	getch();
}
