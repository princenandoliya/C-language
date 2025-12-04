#include <stdio.h>


int total(int a, int b)
{
	return a + b;

}

int min(int a,int b)
{
	return a-b;
}


int main()
{
	int result = total(5,15);
	
	printf("%d\n",result);
	
	
	int minresult = min(10,19);
	printf("%d\n",minresult);
	
	
	return 0;
}