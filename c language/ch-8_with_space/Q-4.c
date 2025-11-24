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
		
			if(k%2!=0){
			    printf("1");
			}
			else
			printf("0");
			
			
		}
		printf("\n");
	}
	
	return 0;
}