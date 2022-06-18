#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, aux;
	printf("Informe a variavel A: ");
	scanf("%d", &a);
	printf("Informe a variavel B: ");
	scanf("%d", &b);
	aux=a;
	a=b;
	b=aux;
	printf("Apos a troca de valores ser efetuada\nA: %d\nB: %d", a, b);
	getch();
}
