#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int num=5,i,cube;
	for(i=1; i<=num; i++) {
		cube=i*i*i;
		printf("number is %d and cube of the %d is %d \n",i,i,cube);
	}
}
