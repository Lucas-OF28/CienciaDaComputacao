#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

char troca(char *str);

main()
{
	char string[20];
	
	printf("Informe a string: ");
	scanf("%s", &string);
	
	troca(string);
	printf("Conversao para maiscula: %s\n", string);
}

char troca(char *str)
{
	int i;
	for(i=0; i<20; i++)
	{
		 toupper(str[i]);
	}
	return 0;

}
