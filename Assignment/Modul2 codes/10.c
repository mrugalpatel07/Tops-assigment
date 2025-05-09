#include <stdio.h>
int main()
{
    	int a[100];
    	int *ptr = &a;
    	printf ("\n enter the variable = ");
    	scanf ("%d",&a);
    	printf ("\n address of the value = %p",ptr);
    	printf ("\n value of the variable = %d",*ptr);
    	return 0;
}
