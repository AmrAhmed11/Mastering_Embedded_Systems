/*
 * main.c
 *
 *  Created on: Jun 16, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int factorial(int n);

int main() {
	int n;
	printf("enter a positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	int result = factorial(n);
	printf("factorial of %d is = %d", n, result);
}

int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}else if(n==2){
		return 2;
	}
	return n * factorial(n-1);
}
