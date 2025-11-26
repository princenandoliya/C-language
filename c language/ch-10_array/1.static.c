#include <stdio.h>


int main()
{
	// predefined array
	int num[5] = {2,5,6,9,4};
	
	
	
	// undefined array 	
	int number[5] = {};
	
	
	
	// static  insertion index wise
	 
	number[0] = 7;
	
	number[1] = 4;
	
	number[2] = 3;
	
	number[3] = 2;
	
	number[4] = 9;
	
	
	printf("\n%d",number[2]);
	printf("\n%d",number[1]);
	printf("\n%d",number[0]);
	printf("\n%d",number[4]);
	printf("\n%d",number[3]);	
	
	
	
	
	return 0;	
}