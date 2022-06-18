#include<conio.h>
#include<stdio.h>

void func(int i=0)
{
        for(i=1;i<=100;i++)
    {
        printf("%d\n", i);
    }
}

main()
{
    int i=0;
    func(i);
    getch();
}
