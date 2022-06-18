#include<conio.h>
#include<stdio.h>
main()
{
	int idade, i;
	char nome[30], sexo;
	
	for(i=1;i<=20;i++)
	{
	printf("Nome: ");fflush(stdin);gets(nome);
	printf("Sexo: "); scanf("%c", &sexo);
	printf("Idade: ");scanf("%d", &idade);

		if((sexo=='m'|| sexo=='M')&&idade>21)
	printf("Nome: %s\n\n", nome);
}
	getch();
}
