#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,temp,sum=0;
	printf("enter your limit;");
	scanf("%d",&limit);
	for(i=1; i<=limit; i++) {
		temp=i+i;
		sum+=temp;
	}
	printf("some of the natural even numbers 0-%d is %d",limit,sum);
}
