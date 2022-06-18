#include<conio.h>
#include<stdio.h>
void multiplica(int a);
main()
{
    int a;
    printf("Informe um numero:");
    scanf("%d",&a);
    multiplica(a);
    getch();
}
void multiplica(int a)
{
    int mult=0;
    for(int i=1;i<=a;i++)
    {
    	printf("\n");
        for(int j=1;j<=a;j++)
        {
            mult=i*j;
        	if(j<=i)
            {
            printf("%d\t",mult);
          	 }
        }
    }
}
