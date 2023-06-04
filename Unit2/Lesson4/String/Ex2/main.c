/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main(){
	char text[100];
	int count=0;
	printf("enter the string: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);
	for(int i=0;i<100;i++){
		if(text[i]==0){
			break;
		}
		count++;
	}
	printf("length of string = %d",count);
}
