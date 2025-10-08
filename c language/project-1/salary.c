#include <stdio.h>


int main()
{
	float basicSalary,grossSalary,DA,TA,HRA;
	 float daAmount,taAmount,hraAmount;
	 
	 printf("enter your basicSalary");
	 scanf("\n%f",&basicSalary);
	 
	 printf("enter your Da");
	 scanf("\n%f",&DA);
	 
	 printf("enter your TA");
	 scanf("\n%f",&TA);
	 
	 printf("enter your HRA");
	 scanf("\n%f",&HRA);
	 
	 
	 daAmount = (basicSalary*DA)/100;
	 
	 taAmount = (basicSalary*TA)/100;
	 
	 hraAmount = (basicSalary*HRA)/100;
	 
	 
	 
	 
	 grossSalary = basicSalary +daAmount +taAmount+ hraAmount;
	 
	 printf("Gross salary:%.2f",grossSalary);
	 
	 
	 return 0;
	 
	 
	 
}