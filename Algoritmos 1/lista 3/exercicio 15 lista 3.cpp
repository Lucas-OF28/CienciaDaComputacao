#include<stdio.h>
#include<conio.h>
main()
{
	float cel, fare;
	printf("Informe a temperatura em graus celsius: ");
	scanf("%f", &cel);
	fare= (cel*9/5)+32;
	printf("Sua temperatura em graus Farenheit sera: %f", fare);
	getch();
	
}
