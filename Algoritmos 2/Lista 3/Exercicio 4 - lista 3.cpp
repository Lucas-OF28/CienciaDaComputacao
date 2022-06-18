#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int intervalo(int l, int m, int n);

int main()
{
	int a, b, c;
	int somatoria, aux;
	a=0;
	
	printf("Informe o numero A: ");
	scanf("%d", &a);
	printf("Informe o numero B: ");
	scanf("%d", &b);
	printf("Informe o numero c: ");
	scanf("%d", &c);
	
	if(b>c)
	{
	aux=b;
	b=c;
	c=aux;
	}
	
	somatoria=intervalo(a, b, c);
	
	printf("A soma dos numeros inteiros entre %d e %d divisiveis por %d e: %d",b,c,a, somatoria);
	return 0;
}

int intervalo(int l, int m, int n)
{	
	int i, soma,resto;
	
	soma=0;
	
	for(i=m;i<=n;i++)
	{
		resto=m%l;
		if(resto==0)
		{
		soma=soma+m;
		}
	m=m+1;
	}
return soma;
}
	
