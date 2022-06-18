#include<stdio.h>
#include<conio.h>
main()
{
	float produto,desc;
	printf("Informe o preço do produto: ");
	scanf("%f", &produto);
	desc=produto-produto*10;
	printf("O preco do produto sera: %f", desc);
	getch();
	

}

