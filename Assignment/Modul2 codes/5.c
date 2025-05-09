#include <stdio.h>
int main()
{
	int n;
	up:
	printf ("\n enter the month of n = ");
	scanf ("%d",&n);
	
	if (n %2 == 0)
	{
		printf ("\n %d is even number",n);
	}
	else
	{
		printf ("\n %d is odd number",n);
	}
	switch (n)
	{
		case 1 :
			printf ("\n %d for january",n);
		break;
		case 2 :
			printf ("\n %d for febuary",n);
		break;
		case 3 : 
			printf ("\n %d for march",n);
		break;
		case 4 :
			printf ("\n %d for april",n);
		break;
		case 5 :
			printf ("\n %d for may",n);
		break;
		case 6 :
			printf ("\n %d for june",n);
		break;
		case 7 :
			printf ("\n %d for july",n);
		break;
		case 8 :
			printf ("\n %d for august",n);
		break;
		case 9 :
			printf ("\n %d for september",n);
		break;
		case 10 :
			printf ("\n %d for october",n);
		break;
		case 11 :
			printf ("\n %d for november",n);
		break;
		case 12 :
			printf ("\n %d for december",n);
		break;
	}
	goto up;
	return 0;
}
