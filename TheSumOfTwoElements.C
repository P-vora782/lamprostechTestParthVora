/* Online C Compiler and Editor */
#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,s,l;
    int a[10];
    clrscr();
    printf("Enter Length of Array ");
    scanf("%d", &k);
    printf("Enter the array ");
    for(i=0; i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Search Ele ");
    scanf("%d",&s);
    
    for(i=0; i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if((a[i]+a[j])==s)
            {
		printf("[%d \, %d]",i+1,j+1);
		break;
            }
        }
    }
    getch();
    return 0;
}