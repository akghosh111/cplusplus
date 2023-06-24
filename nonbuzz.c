// c program from 1 to n omitting those integers which are divisible by 7
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("\n Enter the last number ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%7!=0)
        printf("%d",i);
    }
 
    
    getch();
}