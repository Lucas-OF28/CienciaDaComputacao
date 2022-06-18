#include<stdio.h>
#include<conio.h>
main()
{
	float base, final, grat,impost;
	printf("Informe o salario base: ");
	scanf("%f", &base);
	grat=base+base*0.2;
	impost=base*0.15;
	final=grat-impost;
	printf("Seu salario com gratificacao: %f\n", grat);
	printf("Desconto: %f\n", impost);
	printf("Seu salario final com descontos de imposto e adicao de gratificacao sera: %f", final);
	getch();
	
}
