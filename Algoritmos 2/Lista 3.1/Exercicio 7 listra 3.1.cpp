#include<stdlib.h>
#include<stdio.h>

void sem_aument();
void aument(float sal_);


main()
{
	float sal_;
	printf("Informe o salario: ");
	scanf("%f", &sal_);
	aument(sal_);
}


void aument(float sal_)
{
	float novo_sal;
	if(sal_<500)
	{
		novo_sal=sal_+sal_*0.3;
		printf("Novo salario: %f", novo_sal);
	}
	else
	sem_aument();
}

void sem_aument()
{
	printf("Nao recebeu aumento");
}
