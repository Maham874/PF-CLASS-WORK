#include <stdio.h>
int main()
{
	int n=5;
	int factorial =1 ;
	int i;
	for(i=1 ; i<=n ; i++)
	{
		factorial*=i; //multiplying factorial by i
	}
	printf("The factorial of %d is: %d",n , factorial);
	return 0;
}
