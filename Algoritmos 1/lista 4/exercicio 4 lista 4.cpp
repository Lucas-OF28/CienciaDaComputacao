#include<stdio.h>
#include<conio.h>
main()
{	float n1,n2, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	if ("%f",media>=7)
	{
	printf("%f\n", media);
	printf("Aprovado");
	}
	else if (media>=3)
	{
	printf("%f\n", media);
	printf("Recuperacao");
	
	}
	else
	
	{
	printf("%f\n", media);
	printf("Reprovado");
	}
	getch();
	}
