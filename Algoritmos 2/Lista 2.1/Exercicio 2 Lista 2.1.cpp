#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	int i;
	char frase[50];
	printf("Informe a frase: ");
	fflush(stdin);
	gets(frase);
	for(i=0;frase[i]!=0;i++)
	{
	
		if((toupper(frase[i])=='A')||
		(toupper(frase[i])=='E')||
		(toupper(frase[i])=='I')||
		(toupper(frase[i])=='O')||
		(toupper(frase[i])=='U'))
			{
			frase[i]='*';
			}
	}
	printf("%s", frase);
	getch();
	
}
