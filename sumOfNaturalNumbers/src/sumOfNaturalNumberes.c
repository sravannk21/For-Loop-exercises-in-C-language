#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,sum=0;
	printf("please enter your limit:");
	scanf("%d",&limit);
	for(i=1; i<=limit; i++) {
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nsum of the numbers %d",sum);
}
