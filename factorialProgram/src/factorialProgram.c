#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int num,i,factorial=1;
	printf("enter a number: ");
	scanf("%d",&num);
	if (num==0 || num<0) {
		printf("zeros and negative numbers have no factorial");
	}
	else {
		for(i=1; i<=num; i++) {
				factorial=factorial*i;
			}
		printf("Factorial of %d is %d",num,factorial);
	}
}
