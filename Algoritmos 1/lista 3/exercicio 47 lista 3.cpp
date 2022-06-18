#include<conio.h>
#include<stdio.h>
main()
{
	float precofab, distri, total, impost, distritotal, imposttotal;
	printf("Informe o preço de fabrica do carro: ");
	scanf("%f", &precofab);
	printf("Informe o percentual de lucro do distribuidor: ");
	scanf("%f", &distri);
	printf("Informe o percentual de impostos: ");
	scanf("%f", &impost);
	distritotal=precofab*distri/100;
	imposttotal=precofab*impost/100;
	total=precofab+imposttotal+distritotal;
	printf("O valor correspondente ao distribuidor sera: %f\n", distritotal);
	printf("O valor correspondente ao imposto sera: %f\n", imposttotal);	
	printf("O valor total do veiculo sera: %f", total);
	getch();
	
	
}
