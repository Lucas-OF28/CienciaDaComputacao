#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float n1, sen, cose, tang, seca, coseca, cotang;
	printf("Informe um angulo em graus: ");
	scanf("%f", &n1);
	sen=sin(n1);
	cose=cos(n1);
	tang=tan(n1);
	seca=1/cos(n1);
	coseca=1/sin(n1);
	cotang=cos(n1)/sin(n1);
	printf("O seu seno sera: %f\nSeu coseno sera: %f\nSua tangente sera: %f\nSua secante sera: %f\nSua cosecante sera: %f\nSua cotangente sera: %f", sen, cose, tang, seca, coseca, cotang);
	getch();
}
