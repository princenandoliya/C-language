#include <stdio.h>
#include <string.h>



int main()
{
	char word[] = "hello good morning";
	
	char copyString[sizeof(word)];
	
	strcpy(copyString,word);
	
	printf("%s\n",copyString);
	
	
	return 0;
	
}