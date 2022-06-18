#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int n1, qua, cub, raizq, raizc;
	printf("Informe um numero: ");
	scanf("%d", &n1);
	qua=n1*n1;
	cub=pow(n1, 3);
	raizq=sqrt(n1);
	raizc=cbrt(n1);
	printf("O numero elevado ao quadrado sera: %d\nO numero elevado ao cubo sera: %d\nSua raiz quadrada sera: %d\nSua raiz cubica sera: %d", qua, cub, raizq, raizc);
	getch();
	
}
