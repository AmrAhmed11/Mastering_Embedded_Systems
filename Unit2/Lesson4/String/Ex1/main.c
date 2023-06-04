/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>
#include<string.h>

int main() {
	char str[100], s;
	int count=0;

	printf("enter the string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);

	printf("enter the char: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &s);

	for(int i=0;i< strlen(str);i++){
		if(str[i]==s){
			count++;
		}
	}
	printf("Frequency of %c = %d",s,count);
}
