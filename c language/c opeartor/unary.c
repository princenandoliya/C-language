#include <stdio.h>

int main()
{
	int a = 8;
	
	
	//preincrement
	
	printf("pre increment %d",++a);
	
	
	//pre decrement
	
	printf("\npre decrement %d",--a);
	
	//post increment
	
	printf("\npost incerment %d",a++);
	
	printf("\nnow a value %d",a);
	
	
	//post decrement
	
	printf("\npost decrement %d",a--);
	
	printf("\nnow a value %d",a);
	
	return 0;
	
}