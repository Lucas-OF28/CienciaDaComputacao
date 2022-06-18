#include<conio.h>
#include<stdio.h>
int result(int soma);
int func(int i=0)
{
	int soma=0;
        for(i=2;i<=250;i++)
    {
    	if(i%2==0)
    	{
    		printf("%d\n", i);
    		soma=soma+i;
		}
    }
    result(soma);
}

main()
{
    int i=0;
    func(i);
    getch();
}
 int result(int soma)
{
	printf("A soma dos pares sera: %d", soma);
}
