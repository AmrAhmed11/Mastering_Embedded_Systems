/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */


#include<stdio.h>

int main(){
	int a;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	a=(a*(a+1))/2;
	printf("sum = %d",a);
}
