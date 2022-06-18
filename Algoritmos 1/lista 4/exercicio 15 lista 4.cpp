#include<conio.h>
#include<stdio.h>
main()
{
	float prod, preco, aume;
	printf("Informe o preco do produto: ");
	scanf("%f", &prod);
	if (prod<=50)
	{
		aume=prod+prod*0.05;
		printf("O novo preco do produto sera: %f\n", aume);
	}
	else if (prod>50 && prod<=100)
	{
		aume=prod+prod*0.1;	
		printf("O novo preco do produto sera: %f\n", aume);
	}
	else if (prod>100)
	{
		aume=prod+prod*0.15;
		printf("O novo preco do produto sera: %f\n", aume);
	}
	if(aume<=80)
	{
	printf("Sua classificacao e barato");
	}
	else if(aume>80 && aume<120)
	{
		printf("Sua classificacao e normal");
	}
	else if(aume>120 && aume<200)
	{
		printf("Sua classificacao e caro");
	}
	else if(aume>200)
	{
		printf("Sua classificacao e muito caro");
	}
	getch();
	
}
