/*
 * Ex7.c
 *
 *  Created on: May 31, 2023
 *      Author: potar
 */

//it is an interview trick
//
//Write Source Code to Swap Two Numbers without temp variable.

#include"Ex7.h"

void Ex7(){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	b+=a;
	a=b-a;
	b-=a;
	printf("After swapping, value of a = %f \nAfter swapping, value of b = %f\n",a,b);
}
