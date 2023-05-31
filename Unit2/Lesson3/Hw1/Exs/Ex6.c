/*
 * Ex6.c
 *
 *  Created on: May 31, 2023
 *      Author: Amr Ahmed
 */

//EX6:
//
//Write Source Code to Swap Two Numbers
//
//#########Console_output######
//Enter value of a: 1.20
//Enter value of b: 2.45
//
//After swapping, value of a = 2.45
//After swapping, value of b = 1.2
//#############################
//########################################################################

#include"Ex6.h"

void Ex6(){
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %f \nAfter swapping, value of b = %f\n",a,b);
}
