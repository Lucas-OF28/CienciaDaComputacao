#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
	float sal;
	printf("Informe o salario: ");
	scanf("%f", &sal);
	if (sal<1500)
	{
		printf("Ganhara aumento de: %f", sal+sal*0.3);
	}
	else if (sal>1500)
	{
		printf("Nao recebera aumento");
		
	}
	getch();
	
}
