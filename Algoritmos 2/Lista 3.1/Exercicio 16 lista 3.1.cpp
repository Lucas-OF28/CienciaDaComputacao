#include<conio.h>
#include<stdio.h>

void func(int i=0)
{
	int soma;
        for(i=250;i<=500;i++)
    {
    	if(i%2!=0)
    	{
    		printf("%d\n", i);
    		soma=soma+i;
		}
    }
    printf("A soma sera: %d\n", soma);
}

main()
{
    int i;
    func(i);
    getch();
}
