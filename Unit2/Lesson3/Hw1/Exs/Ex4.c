/*
 * Ex4.c
 *
 *  Created on: May 31, 2023
 *      Author: Amr Ahmed
 */

//Write C Program to Multiply two Floating Point Numbers
//i should see the Console as following:
//##########Console-output###
//
//###########################
//Enter two numbers: 2.4
//1.1
//Product: 2.640000
//########################################################################

#include "Ex4.h"

void Ex4(){
	float n,m,mult;
	printf("Enter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&n);
	scanf("%f",&m);
	mult = n*m;
	printf("Product: %f\n",mult);
}
