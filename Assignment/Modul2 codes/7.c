#include <stdio.h>
 int main()
{
    int num,i;
    printf("\n enter the number = ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        if (i%3==0)
        {
            continue;
        }
        if (i%5==0)
        {
            break;
        }
        printf("\n %d",i);
    }

    return 0 ;
}
