/*
 * main.c
 *
 *  Created on: Jun 16, 2023
 *      Author: Amr Ahmed
 */

#include <stdio.h>

void reverse();

int main(){
	printf("enter a sentence: ");
	fflush(stdin);
	fflush(stdout);
	reverse();
}

void reverse(){
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		reverse();
		printf("%c",c);
	}
}
