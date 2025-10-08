#include <stdio.h>

int main()
{
	float fristAngle,secondAngle,thridAngle;
	
	printf("enter your fristAngle:");
	scanf("%f",&fristAngle);
	
	printf("enter your secondAngle:");
	scanf("%f",&secondAngle);
	
	thridAngle = 180 - (fristAngle + secondAngle);
	
	printf("thridAngle is : %.2f",thridAngle);
	
	return 0;
	
	
}