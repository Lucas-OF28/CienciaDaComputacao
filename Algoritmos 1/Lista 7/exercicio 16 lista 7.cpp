#include<stdio.h>
#include<conio.h>
main()
{
	int cod[3], est[3], client,i,att=0;
	float quant[3],item;
	for(i=0;i<3;i++)
	{
		printf("Codigo: ");
		scanf("%d", &cod[i]);
		printf("Quantidade em estoque: ");
		scanf("%d",&est[i]);
	}
	printf("\nCodigo\n");
	for(i=0;i<3;i++)
		{
			printf("%d\t", cod[i]);
		}
	printf("\nEstoque\n");
	for(i=0;i<3;i++)
		{
		printf("%d\t", est[i]);
		}
			printf("\nCodigo do cliente: ");
			scanf("%d", &client);
			while(client!=0)
		{
				printf("Item desejado: \n");
				scanf("%d", &item);
				printf("Quantidade: \n");
				scanf("%d", &quant[i]);
		if(item==cod[i])
		{	
			if(quant[i]<est[i])
			{	
				printf("\nPedido atendido. Obrigado e volte sempre\n");
				att=est[i]-quant[i];
			}
			else
			{
				printf("\nNao temos estoque suficiente dessa mercadoria\n");
			}
		}
		if(item!=cod[i])
		{
			printf("\nItem Inexistente\n");
		}
	printf("\nCodigo do cliente: ");
	scanf("%d", &client);
	}
	printf("\nCodigo\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t", cod[i]);
	}
	printf("\nEstoque Atualizado\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t", att);
	}
	getch();
}
