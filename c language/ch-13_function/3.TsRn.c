#include <stdio.h>

void Msg(char msg[])
{
	printf("%s\n",msg);
	
}
void multiplication(int a,int b)
{
	printf("%d\n",a*b);
}




int main()
{
	Msg("hello");
	multiplication(10,9);
	
	
	return 0;
}