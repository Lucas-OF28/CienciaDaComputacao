#include<stdio.h>
#include<conio.h>
main()
{
	int ano_nasc, ano_atual, idade, meses, dias, sema;
	printf("Informe o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
	idade=ano_atual-ano_nasc;
	dias=idade*365;
	meses=dias/30;
	sema=dias/7;
	printf("Sua idade sera: %d\nSua idade em dias sera: %d\nSua idade em meses sera: %d\nSua idade em semanas sera: %d", idade, dias,meses, sema);
	getch();
}
