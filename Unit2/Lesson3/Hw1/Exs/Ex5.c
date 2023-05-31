/*
 * Ex5.c
 *
 *  Created on: May 31, 2023
 *      Author: Amr Ahmed
 */

//Write C Program to Find ASCII Value of a Character
//
//#########Console_output######
//Enter a character: G
//ASCII value of G = 71
//#############################

#include"Ex5.h"

void Ex5(){
	char c;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d\n",c,c);
}
