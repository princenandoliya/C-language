#include <stdio.h>


int main()
{
	int num, digit = 0;
	printf("Enter a number: ");
	
	scanf("%d", &num);
	
	if (num == 0)
	{
		digit = 1;
	}
	else
	{
		while (num != 0)
		{
			num = num / 10;
			digit++;
		}
	}
	printf("Number of digits: %d\n", digit);
	
	return 0;
}