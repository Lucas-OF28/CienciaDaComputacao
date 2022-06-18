#include<stdio.h>
#include<stdlib.h>

void media(float n[3], float p[3]);

main()
{
	int i;
	float nota[3], peso[3];
	for(i=0;i<3;i++)
	{
		printf("Informe a nota %d: ", i+1);
		scanf("%f", &nota[i]);
		printf("Informe o peso %d: ",i+1);
		scanf("%f", &peso[i]);
	}
	media(nota, peso);
	system("pause");
	
}
void media(float n[3], float p[3])
{
	int i;
	float soman=0, somap=0;
	for(i=0;i<3;i++)
	{
		soman=soman+n[i]*p[i];
		somap=somap+p[i];

	}
	printf("A media e: %f", soman/somap);
}

