#include<stdio.h>
#include<stdlib.h>

void ordenar(int *a, int *b, int *c);
main()
{
	int v1, v2, v3;
	
	printf("Informe A: "); scanf("%d", &v1);
	printf("Informe B: "); scanf("%d", &v2);
	printf("Informe C: "); scanf("%d", &v3);
	ordenar(&v1, &v2, &v3);
	
	printf("\nA: %d\n B:%d\nC:%d", v1,v2,v3);
	system("pause");
}
void ordenar(int *a, int *b, int *c)
{
	int aux;
	if(*a<*b)
	{
		aux=*a;
		*a=*b;
		*b=aux;
	}
	if (*a<*c)
	{
		aux=*a;
		*a=*c;
		*c=aux;
	}
	if(*b>*c)
	{
		aux=*a;
		*a=*c;
		*c=aux;
	}

}
