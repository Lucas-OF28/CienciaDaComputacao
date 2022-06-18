#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int i;
	float n;
	for(i=1;i<=4;i++)
	{
	printf("Informe um numero: ");
	scanf("%f", &n);
	printf("Raiz: %f\n",  sqrt(n));	
	}
	getch();
}
