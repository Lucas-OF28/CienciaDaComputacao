
#include<stdio.h>
#include<stdlib.h>
void triplo(int num);
main()
{
	int numero=-1;
	while(numero!=-999)
	{
		printf("Informe o numero:");
		scanf("%d", &numero);
		triplo(numero);
	}
}


void triplo(int num)
{
	printf("Triplo de %d: %d\n", num, num*3);
}
