#include <stdio.h>

int main()
{
		int num=5;
	
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=num-i;j++)
		{
			printf(" ");
			
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
			
			
		}
		printf("\n");
	}
	
	return 0;
}