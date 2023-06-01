/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>

int main() {
	int a, fac = 1;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &a);
	if (a == 0) {
		printf("factorial = 0");
	} else if (a < 0) {
		printf("Error!!! Factorial of a negative number does not exist.");
	} else {
		for (int i = 2; i <= a; i++) {
			fac *= i;
		}
		printf("factorial = %d", fac);
	}
}
