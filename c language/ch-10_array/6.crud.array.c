#include <stdio.h>


int main()
{
	int num[5]={7,9,4,6,2};
	
	
	int pos=3;
	
	for(int  i=pos;i<=4;i++){
		num[i] = num[i+1];
	}
	
	for(int i=0;i<=3;i++){
		printf("%d\n",num[i]);		
	}
	
	return 0;
}