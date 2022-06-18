#include<conio.h>
#include<stdio.h>

int soma(int a, int b);

main()
{
	int n1, n2, result;
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	result=soma(n1, n2);
	printf("A soma e: %d", result);	
}
int soma(int a,int b)
{
	int i, resultado=0;
	for(i=a+1;i<b;i++)
	{
		resultado=resultado+i;
	}
	return resultado;
}
