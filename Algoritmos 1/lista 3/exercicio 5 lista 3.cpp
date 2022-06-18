#include<stdio.h>
#include<conio.h>
main()
{
	float n1,desc;
	printf("Informe o preco do produto: ");
	scanf("%f", &n1);
	desc=n1-(n1*0.1);
	printf("O desconto do produto sera: %f",desc);
	getch();
}
