#include<conio.h>
#include<stdio.h>
main()
{
	char sexo;
	int idade,cont=0,contf=0,contm=0;
	float soma=0;
	printf("Idade: ");
	scanf("%d", &idade);
	while(idade!=0)
	{	
	printf("Sexo: ");
	fflush(stdin);
	soma=soma+idade;
	cont++;
	if(sexo=='f'|| sexo=='F')
	contf++;
	if(sexo=='m'||sexo=='M')
	contm++;
	scanf("%c", &sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	
}
printf("Media das idades: %f\n",soma/cont);
printf("Sexo Masculino: %d\n",contm);
printf("Sexo Feminino: %d\n", contf);
getch();
}
