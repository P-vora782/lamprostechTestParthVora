/* Online C Compiler and Editor */
#include <stdio.h>
#include<conio.h>

int main()
{
    int i,m,n,x;
    int num1[10],num2[10];
    clrscr();

    printf("Enter Length of Array num1 ");
    scanf("%d", &m);
    printf("Enter the array ");
    for(i=0; i<m;i++)
    {
	scanf("%d",&num1[i]);
    }

    printf("Enter Length of Array num2 ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&num2[i]);
    }

    x=m;
    for(i=0;i<n;i++)
    {
    num1[x]=num2[i];
    x++;

    }
    printf("Merged array from num1 \n");

    for(i=0; i<m+n;i++)
    {
	printf("%d",num1[i]);
    }
    getch();
    return 0;
}