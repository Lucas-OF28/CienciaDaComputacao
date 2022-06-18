#include<conio.h>
#include<stdio.h>
main()
{
	float sal, novo;
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	if (sal>3000 && sal<4000)
	{
	printf("Seu novo salario sera: %f",novo=sal+sal*0.15);	
	}
	else if(sal>=4000 && sal<=6000)
	{
	printf("Seu novo salario sera: %f",novo=sal+sal*0.1);
	}
	else if (sal>=6000 && sal<=9000)
	{
	printf("Seu novo salario sera: %f",novo=sal+sal*0.05);
	}
	
	else 
	{
	printf("Salario invalido");
	}
	getch();
	
}

