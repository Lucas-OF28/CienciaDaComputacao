#include<stdio.h>
#include<stdlib.h>

void calc_pi(int termos);

main()
{
	int termos;
	printf("Informe o numero de termos: ");
	scanf("%d", &termos);
	calc_pi(termos);
}
void calc_pi(int termos)
{
	int i;
	float den=1, pi=0;
	for(i=1;i<=termos;i++)
	{
		if(i%2==0)
		{
			pi=pi-4/den;
		}
		else
		{
			pi=pi+4/den;
		}
		den=den+2;
	}
	printf("Valor de pi: %f", pi);
}
