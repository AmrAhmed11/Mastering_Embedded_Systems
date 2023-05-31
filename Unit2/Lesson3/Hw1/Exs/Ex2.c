/*
 * Ex2.c
 *
 *  Created on: May 31, 2023
 *      Author: Amr
 */

//Write C Program to Print a Integer Entered by a User
//i should see the Console as following:
//##########Console-output###
//Enter a integer: 25
//You entered: 25
//###########################


#include "Ex2.h"

void Ex2(){
	int n;
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("You entered: %d\n",n);
}

