#include<stdio.h>
#include<conio.h>
main()
{
	float d1,d2,area,luz;
	printf("Infome a primeira dimensao do comodo: ");
	scanf("%f", &d1);
	printf("Infome a segunda dimensao do comodo: ");
	scanf("%f", &d2);
	area=d1*d2;
	luz=18*area;
	printf("Sua area sera: %f\n",area);
	printf("E a potencia da luz devera ser de: %f", luz);
	getch();
	
	
}
