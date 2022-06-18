#include<stdio.h>
#include<conio.h>
main()
{
	float conta1,multa1, conta2,multa2,soma, salario, restante;
	printf("Informe o salario de Joao: ");
	scanf("%f", &salario);
	printf("Informe a primeira conta: ");
	scanf("%f", &conta1);
	printf("Informe a segunda conta: ");
	scanf("%f", &conta2);
	multa1=conta1+0.02;
	multa2=conta2+0.02;
	soma=multa1+multa2;
	restante=salario-soma;
	printf("O restante de seu salario sera de: %f", restante);
	getch();
}
