#include<stdio.h>
#include<stdlib.h>

int ordenar(int *a, int *b, int *c);

main()
{
	int v1, v2, v3, r;
	
	printf("Informe A: "); scanf("%d", &v1);
	printf("Informe B: "); scanf("%d", &v2);
	printf("Informe C: "); scanf("%d", &v3);

	r=ordenar(&v1, &v2, &v3);
	
	printf("\nA:%d \nB:%d \nC:%d \nRotina: %d\n", v1,v2,v3,r);
	system("pause");
}

int ordenar(int *a, int *b, int *c)
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
	
	if(a==b && a==c && b==c)
	{
		return 1;
	}
}
