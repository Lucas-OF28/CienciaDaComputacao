#include<conio.h>
#include<stdio.h>
main()
{
	char estado;
	int idade,cas=0,sol=0;
	float viu=0,soma=0,des=0,quant=0;
	printf("Idade: ");
	scanf("%d", &idade);
	while(idade!=0)
	{
	printf("Estado Civil\n");
	printf("C-Casado\nS-Solteiro\nV-Viuvo\nD-Desquitado ou separado\n");
	fflush(stdin);
	scanf("%c", &estado);
	quant++;
	
	if(estado=='c' || estado=='C')
	cas++;
	if(estado=='s' || estado=='S')
	sol++;
	if(estado=='v' || estado=='V')
	{
	viu++;
	soma=soma+idade;
	}
	if(estado=='d' || estado=='D')
	des++;
	printf("Idade: ");
	scanf("%d", &idade);
	}
	printf("Pessoas casadas: %d\n",cas);
	printf("Pessoas solteiras: %d\n",sol);
	printf("Media das idades das pessoas viuvas: %f\n",soma/viu);
	printf("Porcentagem de pessoas separadas: %f\n",(quant/des)*100.0);
	getch();
	}
