#include<stdio.h>
#include<conio.h>
main()
{
	int ano_nasc, ano_atual, idade, ida_2010;
	printf("Informe o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
	idade=ano_atual-ano_nasc;
	ida_2010=2010-ano_nasc;
	printf("Sua idade e: %d\nSua idade em 2010 sera: %d", idade, ida_2010);
	getch();
	
	
}
