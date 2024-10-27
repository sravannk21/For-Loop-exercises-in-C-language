#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,sum=0;
	float average;
	printf("enter your limit:");
	scanf("%d",&limit);
	for(i=1; i<=limit; i++) {
		sum=sum+i;
		printf("%d ",i);
	}
	average=sum/limit;
	printf("\naverage of the numbers: %f \nsum of the numbers: %d",average,sum);
}
