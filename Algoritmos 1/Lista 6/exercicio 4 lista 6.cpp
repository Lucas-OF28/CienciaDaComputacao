#include<conio.h>
#include<stdio.h>
main()
{
	int n,cont=0,soma=0;
	float media;
	printf("Informe um numero: ");
	scanf("%d", &n);
	while(n>=0)
	{
	soma=soma+n;
	cont++;
	printf("Numero: %d\n",n);
	printf("Informe um numero: ");
	scanf("%d", &n);
	}
	media=soma/cont;
	printf("Media: %f",media);
	
	getch();
	}
