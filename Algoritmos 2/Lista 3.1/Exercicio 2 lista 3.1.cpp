#include<stdio.h>
#include<stdlib.h>

float media(float n[3], float p[3])

{
	int i;
	float soman=0, somap=0, pond=0;
	for(i=0;i<3;i++)
	{
		soman=soman+n[i]*p[i];
		somap=somap+p[i];
	}
	pond=soman/somap;
	return pond;
}

main()
{
	int i;
	float nota[3], peso[3], result;
	for(i=0;i<3;i++)
	{
		printf("Informe a nota %d: ", i+1);
		scanf("%f", &nota[i]);
		printf("Informe o peso %d: ",i+1);
		scanf("%f", &peso[i]);
	}
	result=media(nota, peso);
	printf("A media e: %f", result);
}
