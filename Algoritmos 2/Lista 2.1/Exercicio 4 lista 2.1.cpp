#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int i;
	char frase1[50], frase2[50];
	printf("Informe a primeira frase: ");
	fflush(stdin);
	gets(frase1);
	printf("Informe a segunda frase: ");
	fflush(stdin);
	gets(frase2);
	
	strcat(frase1," ");
	strcat(frase1,frase2);
	printf("%s", frase1);
	getch();	
}
