/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>
#include<string.h>

int main() {
	char text[100];

	printf("enter the string: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);

	for (int i = strlen(text) - 1; i >= 0; i--) {
		printf("%c",text[i]);
	}
}
