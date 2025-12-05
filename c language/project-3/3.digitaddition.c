#include <stdio.h>

int main()
{
	int n, number1, number2;
	
	printf("Enter a  number: ");
	scanf("%d", &n);
	
	int sum = n;
	 
	number2 = n % 10; 
	 for (; sum >= 10; sum = sum / 10);
	 
	number1 = sum;
	
	printf("Sum of first and last digit: %d\n", number1 + number2);
	
	
	return 0;
		 
}