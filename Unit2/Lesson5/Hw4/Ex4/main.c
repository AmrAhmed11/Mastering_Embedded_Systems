/*
 * main.c
 *
 *  Created on: Jun 16, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int calcPower(int n, int p);

int main() {
	int n, p;
	printf("enter base number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	printf("enter power number(+ve integer): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &p);
	int result = calcPower(n, p);
	printf("%d^%d = %d ", n, p, result);
}

int calcPower(int n, int p) {
	if (p == 1) {
		return n;
	}
	return n * calcPower(n, p - 1);
}
