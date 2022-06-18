#include<conio.h>
#include<stdio.h>
main()
{
	int idade;
	float peso;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	printf("Informe o peso: ");
	scanf("%f", &peso);
	if(idade<20)
	{
		if(peso<60)
		printf("Risco 9");
		else if(peso>=60 && peso<90)
		printf("Risco 8");
		else if (peso>=90)
		printf("Risco 7");	
	} 
	else if(idade>=20 && idade<=50)
{
		if(peso<60)
		printf("Risco 6");
		else if(peso>=60 && peso<=90)
		printf("Risco 5");
		else if (peso>90)
		printf("Risco 4");	
	} 
	else if(idade>50)
	{	
		if(peso<60)
		printf("Risco 3");
		else if(peso>=60 && peso<=90)
		printf("Risco 2");
		else if (peso>90)
		printf("Risco 1");
	} 
	getch();

}

