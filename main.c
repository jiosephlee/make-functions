#include<stdio.h>
#include<stdlib.h>
#include"headers.h"

int main(){
	int array[4] = {1,3,5,7};
	int len = sizeof(alpha)/sizeof(array[0]);
	int array_last[5];
	printf("Array: ");
	int count = 0;
	for(count;count<len;count++){
		printf("%d, ", array[i]);
	}
	printf("\nAvg of the Values: %lf\n", arrmn(alpha, len));
	arrcp(alpha, omega, len);
	printf("Copied array: ");
	for(i=0;i<len;i++){
		printf("%d, ", omega[i]);
	}
	char str[15] = "hello, world";
	printf("\nLength of String \"hello, world\": %d\n", lenstr(str));
}
