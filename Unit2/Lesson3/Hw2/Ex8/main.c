/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main() {
	char c;
	float a, b, sum;
	printf("Enter operator either + or - or * or / :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	printf("Enter two operands");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	scanf("%f", &b);
	switch (c) {
	case '+':
		sum = a + b;
		printf("%f + %f = %f", a, b, sum);
		break;
	case '-':
		sum = a - b;
		printf("%f - %f = %f", a, b, sum);
		break;
	case '*':
		sum = a * b;
		printf("%f * %f = %f", a, b, sum);
		break;
	case '/':
		sum = a / b;
		printf("%f / %f = %f", a, b, sum);
		break;
	default:
		printf("You entered a wrong operator :(");
	}
}
