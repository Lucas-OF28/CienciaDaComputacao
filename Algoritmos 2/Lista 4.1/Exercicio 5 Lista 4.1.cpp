#include<stdio.h>
#include<stdlib.h>

int inverte_vetor(int *v1, int *v2, int n);

main()
{
	int tam;
	printf("Informe o tamanho do vetor: "); scanf("%d", &tam);
	int vet1[tam],vet2[tam], i, ma=-999;
	for(i=0;i<tam;i++)
	{
		printf("Informe o valor: "); scanf("%d", &vet1[i]);
	}
	ma=inverte_vetor(vet1, vet2, tam);
	printf("Vetor 2\n");
	for(i=0;i<tam;i++)
	{
		printf("%d\t", vet2[i]);
	} 
	printf("\nMaior valor do vetor e: %d\n", ma);
	system("pause");
}

int inverte_vetor(int *v1, int *v2, int n)
{
	int i, j=n-1, maior=v1[0];
	
	for(i=0;i<n;i++,j--)
	{
		v2[j]=v1[i];
		if(v1[i]>maior)
		{
			maior=v1[i];
		}
	}
	return maior;
}

