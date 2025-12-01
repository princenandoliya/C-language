#include <stdio.h>

int main()
{
	char letter[6] = "hello";
	
	letter[3] = 'd';
	
	printf("%s\n",letter);
	
	
	// dynamic 
	
	printf("enter character to change\n");
	scanf("%c",&letter[3]);
	
	
	printf("%s\n",letter);
	
	
	return 0;
}