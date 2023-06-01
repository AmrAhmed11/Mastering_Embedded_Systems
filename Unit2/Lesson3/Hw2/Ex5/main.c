/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main(){
	char a;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	if( (a>='a' && a<='z') || (a>='A' && a<='Z') ){
		printf("%c is a character.",a);
	}else {
		printf("%c is not a character.",a);
	}
}
