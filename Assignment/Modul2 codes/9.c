#include <stdio.h>
int main()
{
    int c[5],i;
    for (i=0;i<5;i++)
    {
        printf ("\n enter the elementc[%d] = ",i+1);
        scanf ("%d",&c[i]);
    }
    printf ("\n array = ");
    for (i=0;i<5;i++)
    {
        printf ("%d ",c[i]);
    }
    int a[3][3],b[3][3],k,j,sum=0;
    for (k=0;k<3;k++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\n enter the element a[%d][%d]= ",k,j);
            scanf ("%d",&a[k][j]);
        }
    }
    for (k=0;k<3;k++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\n enter the element b[i][j]= ",k,j);
            scanf ("%d",&b[k][j]);
        }
    }
    printf ("\n 1st \t 2nd =\t sum \n");
    for (k=0;k<3;k++)
    {
        for (j=0;j<3;j++)
        {
            printf ("%d ",a[k][j]);
        }
     	   printf ("\t");
            for (j=0;j<3;j++)
            {
                printf ("%d ",b[k][j]);
            }
            printf ("\t");
            for (j=0;j<3;j++)
            {
                sum = a[k][j]+b[k][j];
                printf ("%2d ",sum);
            }
            printf ("\n");
    }
   
    return 0;
}
