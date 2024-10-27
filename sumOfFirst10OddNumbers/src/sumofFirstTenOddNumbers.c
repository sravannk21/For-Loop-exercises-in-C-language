#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,sum=0,odd;
	printf("please enter your limit:");
	scanf("%d",&limit);
	for(i=1; i<=limit; i++) {
		odd=2*i-1;
		printf("%d ",odd);
		sum+=odd;
	}
	printf("\nsum of the numbers is %d",sum);
}
