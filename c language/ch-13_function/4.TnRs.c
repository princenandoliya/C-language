#include <stdio.h>

int addition()
{
	return 4+10;
}

int sqaure()
{
	int value=2;
	
	return value*value;
	
}

int main()
{
	
	int result1 = addition();
	printf("%d\n",result1);	
	
	int result2 = sqaure();
	printf("%d\n",result2);	
	
	return 0;
}