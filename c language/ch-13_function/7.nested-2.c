#include <stdio.h>


int addition()
{
	return 6+10;
}

void result()
{
	int sum = addition();
	printf("addition of numbers: %d\n", sum);
}

int main()
{
	result();
	
	return 0;
}