#include <stdio.h>


int main()
{
	int a = 10;
	
	// add and assign
	// a = a + 10
	
	printf("add and assign: %d",a+=10);
	
	printf("\nsubstraction and assign: %d",a-=10);
	
	printf("\nmultiplication and assign: %d",a*=10);
	
	printf("\ndivision and assign: %d ",a/=10);
	
	printf("\nmodulo and assign: %d",a%=10);
	
	return 0;
	
}