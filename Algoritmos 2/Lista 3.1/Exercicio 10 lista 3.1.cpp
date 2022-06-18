#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

float boni(float bonifica);
float auxi(float escola);

main()
{
	float sal, bonificacao, aux, b, a; 
	printf("Informe o salario: "); scanf("%f", &sal);
	bonificacao=boni(b);
	aux=auxi(a);
	printf("O novo salario sera: %f", sal+aux+bonificacao);
}
float boni(float bonifica)
{
	float sal, boni;
	
	if(sal<=500)
	{
		return sal*0.05;
	}
	else if (sal>500 && sal<=1200)
	{
		return sal*0.12;
	}
	else if(sal>1200)
	{
		return sal*0;
	}
}
float auxi (float escola)
{
	float sal;
	
	if(sal<=600)
	{
		return 150;
	}
	else if (sal>=600)
	{
		return 100;
	}
}
