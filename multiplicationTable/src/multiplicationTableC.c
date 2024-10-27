#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,j;
	printf("enter your limit:");
	scanf("%d",&limit);
	for(i=1; i<=10; i++) {
		for(j=1; j<=i; j++) {
			printf("%d * %d = %d \n",j,limit,j*limit);
		}
	}
}
