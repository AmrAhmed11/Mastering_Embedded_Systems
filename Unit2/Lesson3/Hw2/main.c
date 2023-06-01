/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main(){
	int a;
	printf("enter the number you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	switch(a%2){
		case 1:
		case -1:
			printf("%d is odd",a);
			break;
		case 0:
			printf("%d is even",a);
			break;
		default:
			printf("invalid");
	}
}
