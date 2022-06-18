#include<conio.h>
#include<stdio.h>
main()
{
	float n1,n2,soma,sub,mult,div;
	int opcao;
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\nInforme a opcao:");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			soma=n1+n2;
			printf("A soma sera: %f", soma);
			break;
		case 2:
			sub=n1-n2;
			printf("A subtracao sera: %f", sub);
			break;
		case 3:
			mult=n1*n2;
			printf("A multiplicacao sera: %f", mult);
			break;
		case 4:
			div=n1/n2;
			printf("A divisao sera: %f", div);
			break;			
	
	}
	getch();
	
}
