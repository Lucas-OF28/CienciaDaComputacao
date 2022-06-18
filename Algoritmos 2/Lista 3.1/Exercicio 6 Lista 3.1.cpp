#include<stdio.h>
#include<stdlib.h>

float preco_final (float pre_fab, float perc_lucro, float perc_impos);

main()
{
	float pre_fab, perc_lucro, perc_impos, final;
	
	printf("Informe o preco de fabrica do veiculo: ");
	scanf("%f", &pre_fab);
	printf("Informe o percentual de lucro: ");
	scanf("%f", &perc_lucro);
	printf("Informe o percentual de impostos: ");
	scanf("%f", &perc_impos);
	final=preco_final(pre_fab, perc_lucro, perc_impos);
	printf("O preco final do veiculo sera: %f", final);
}

float preco_final (float pre_fab, float perc_lucro, float perc_impos)
{
	float preco, lucro, impos;
	
	lucro=pre_fab*(perc_lucro/100);
	impos=pre_fab*(perc_impos/100);
	printf("\nO lucro sera: %f\n", lucro);
	printf("\nOs impostos serao: %f\n", impos);
	preco=pre_fab+lucro+impos;
	return preco;
}
