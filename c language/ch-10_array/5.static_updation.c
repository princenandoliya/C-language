#include <stdio.h>

int main()
{
	int num[5]={5,9,1,7,6};
	
	num[3]=88;
	
	
	for(int i=0;i<=4;i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
}