#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	int i;
	char frase[50];
	printf("Informe uma frase: ");
	fflush(stdin);
	gets(frase);
	while(frase[i]!='\0')
	{
		if(isalpha(frase[i])!=0)
		{
			printf("%c", frase[i]);
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	getch();
		
}
