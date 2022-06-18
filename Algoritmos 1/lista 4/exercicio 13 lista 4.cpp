#include<conio.h>
#include<stdio.h>
main()
{
	float custo, total, distri, impost;
	printf("Informe o preco de fabrica do veiculo: ");
	scanf("%f", &custo);
	if (custo<15000)
	{
	total=(custo+custo*0.15);
	printf("O preco do veiculo sera: %f", total);
	}
	else if (custo>=15000 && custo<=25000)
	{
	distri=custo*0.1;
	impost=custo*0.15;
	printf("O preco do veiculo sera %f",total=(custo+distri+impost));	
	}
	else
	{
	distri=custo*0.15;
	impost=custo*0.2;
	printf("O preco do veiculo sera %f",total=(custo+distri+impost));
	}
	
	getch();
	
}
