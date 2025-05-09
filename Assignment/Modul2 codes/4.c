#include <stdio.h>
int main()
{
	int n1,n2;
	printf ("\n enter the value of n1= ");
	scanf ("%d",&n1);
	printf ("\n enter the value of n2= ");
	scanf ("%d",&n2);
	// Arithmatic opreation //
	
	printf("\n the addition of %d and %d is %d",n1,n2,n1+n2);
	printf("\n the multiplication of %d and %d is %d",n1,n2,n1*n2);
	printf("\n the sutraction of %d and %d is %d",n1,n2,n1-n2);
	printf("\n the division of %d and %d is %f",n1,n2,(float)n1/(float)n2);
	
	// Relational opreation //
	
	printf ("\n\n n1>n2 : %d",n1>n2);
	printf ("\n n1<n2 : %d",n1<n2);
	printf ("\n n1<=n2 : %d",n1<=n2);
	printf ("\n n1>=n2 : %d",n1>=n2);
	printf ("\n n1==n2 : %d",n1==n2);
	printf ("\n n1!=n2 : %d",n1!=n2);
	
	// Logical opreation //	
	
	printf ("\n\n n1>0 && n2>0 : %d",n1>0 && n2>0);
	printf ("\n n1>0 || n2>0 : %d",n1>0 || n2>0);
	printf ("\n !(n1>0) : %d",!(n1>0));
	
	return 0;
}
