#include<conio.h>
#include<stdio.h>

void tanso (*p);

main()
{
	int x,y=2.*p;
	x=7;
	p=&x;
	x=x*4;
	printf("%d\n", *p);
	p=&y;
	y=y+*p;
	printf("%d\n", y);
	printf("%d\n", *p);
	getch();
	
}
