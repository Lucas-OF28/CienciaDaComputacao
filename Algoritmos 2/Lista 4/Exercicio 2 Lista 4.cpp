#include<stdio.h>
#include<stdlib.h>
float calc_bonus(float salario, float *novo);
main()
{
	float sal, novo_sal, bo;
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	bo=calc_bonus(sal, &novo_sal);
	printf("Bonus: %f\n", bo);
	printf("Novo salario: %f", novo_sal);
	system("pause");
}

float calc_bonus(float salario, float *novo)
{
	float bonus;
	if(salario>=1200)
		bonus=110;
	else
		bonus=190;
		
	*novo=salario+bonus;
	return bonus;
}

