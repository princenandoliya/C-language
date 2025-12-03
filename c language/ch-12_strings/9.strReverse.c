#include <stdio.h>

#include <string.h>


int main()
{
	
	char alphabet[] = "abcdefg";
	
	char reverseAlaphabet[sizeof(alphabet)];
	
	int length=strlen(alphabet);
	
	int i,j;
	
	for(i=length-1,j=0;i>=0;i--,j++){
		reverseAlaphabet[j] = alphabet[i];
	}
	
	reverseAlaphabet[j] = '\0';
	
	printf("reverse :%s",reverseAlaphabet);
	
	
	return 0;
}