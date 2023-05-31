/*
 * Ex3.c
 *
 *  Created on: May 31, 2023
 *      Author: Amr Ahmed
 */

//Write C Program to Add Two Integers
//
//i should see the Console as following:
//##########Console-output###
//Enter two integers: 12
//11
//Sum: 23
//###########################


#include"Ex3.h"

void Ex3(){
	int n,m,sum;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	sum=n+m;
	printf("Sum: %d\n",sum);
}
