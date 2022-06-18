#include<conio.h>
#include<stdio.h>
main()
{
	int cate;
	float preco,aume,impo,novo;
	char refri;
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
	printf("O produto necessita de refrigeracao: ");
	fflush(stdin);
	scanf("%c", &refri);
	printf("1-Limpeza\n2-Alimentacao\n3-Vestuario\n");
	printf("Informe a opcao: ");
	scanf("%d", &cate);
	if(preco<=25)
	{
		switch(cate)
		{
			case 1:
				aume=preco*0.05;
				break;
			case 2:
				aume=preco*0.08;
				break;
			case 3:
				aume=preco*0.10;
				break;
		}
	}
	else if(preco>25)
	{
		switch(cate)
		{
			case 1:
				aume=preco*0.12;
				break;
			case 2:
				aume=preco*0.15;
				break;
			case 3:
				aume=preco*0.18;
				break;
		}
	}
	if(cate==2 || refri=='S')
	impo=preco*0.05;
	else
	impo=preco*0.08;
	
	novo=preco+aume-impo;
	printf("Seu novo salario sera: %f\n", novo);

	 if(novo<=50)
	 printf("Barato");
	 else if(novo>50 && novo<120)
	 printf("Normal");
	 else
	 printf("Caro");
	 
	getch();
	
	
	}
	
