#include <stdio.h>


int main()
{
	int num[5]={4,8,2,0,4};
	
	printf("enter your third element of array:");
	scanf("%d" ,&num[2]);
	
	for(int i=0;i<=4;i++){
		printf("%d\n",num[i]);		
	}
	
	return 0;
}