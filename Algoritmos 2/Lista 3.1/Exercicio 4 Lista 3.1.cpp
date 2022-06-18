
#include<stdio.h>
#include<stdlib.h>

float sal_(float sal_base);

main()
{
	float sal_base,liquid;
	printf("Informe o salario base: ");
	scanf("%f", &sal_base);
	liquid=sal_(sal_base);
	printf("Seu salario liquido sera: %f", liquid);
	}
	
	float sal_(float sal_base)
	
	{
		float grat=0, impos=0, final;
		
		grat=sal_base*0.05;
		impos=sal_base*0.07;
		final=sal_base+grat-impos;
		return final;
	}
