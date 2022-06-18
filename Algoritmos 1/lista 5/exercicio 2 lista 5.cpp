#include<conio.h>
#include<stdio.h>
main()

{
	int n,soma;
	float i,media;
	for(i=1;i<=4;i++)
	{
	printf("Informe o numero: ");
	scanf("%d", &n);
	soma=soma+n;
	}
	media=soma/4;
	printf("Media: %f\n", media);
	
	getch();
	
}
