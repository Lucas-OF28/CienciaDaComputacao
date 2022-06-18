#include<stdio.h>
#include<conio.h>
main()
{
	float base,final,desc;
	printf("Informe o salario base: ");
	scanf("%f", &base);
	desc=base-base*0.1;
	final=desc+50;
	printf("Seu salario final com desconto e gratificacao sera: %f", final);
	getch();
	
}
