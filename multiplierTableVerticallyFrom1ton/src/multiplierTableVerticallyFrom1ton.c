#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,j,result;
	printf("please enter your limit: ");
	scanf("%d",&limit);

	for(i=1; i<=limit; i++) {
		for(j=1; j<=10; j++){
			result=j*i;
			printf("%d*%d=%d ",j,i,result);
		}
		printf("\n");
	}
}
