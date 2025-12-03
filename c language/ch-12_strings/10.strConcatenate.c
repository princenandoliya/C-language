#include <stdio.h>
#include <string.h>


int main()
{
	char word1[] ="hello ";
	char word2[] ="how are you?";
	
	strcat(word1,word2);
	
	printf("%s\n",word1);
	
	
	return 0;
}