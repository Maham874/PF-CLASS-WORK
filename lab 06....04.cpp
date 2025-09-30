#include <stdio.h>

int main ()
{
	int sum=0;
	int i;
	for(i=1 ; i<=100 ; i++)
	{
		sum+=i; //adding sum to i
	}
	printf("Sum of numbers from 1 to 100 is: %d\n",sum);
	return 0;
}
