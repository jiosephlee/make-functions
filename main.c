#include<stdio.h>
#include<stdlib.h>
#include"headers.h"

int main(){
	int array[4] = {1,3,5,7};
	int len = sizeof(array)/sizeof(array[0]);
	int arraytwo[5];

	printf("Original Array: ");
	int i = 0;
	for(i;i<len;i++){
		printf("%d, ", array[i]);
	}

  copy_array(array, arraytwo, len);
	printf("\nCopied array: ");
	for(i=0;i<len;i++){
		printf("%d, ", arraytwo[i]);
	}
printf("\n\nExpected Average of the Values: 4.0");
	printf("\nOutputted Average of the Values: %lf\n", avg(array, len));

	char str[7] = "yelloo";
  printf("\nExpected Length of String \"yello\": 6");
	printf("\nLength of String: %d\n", strlen(str));
}
