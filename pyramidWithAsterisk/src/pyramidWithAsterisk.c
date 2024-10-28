#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,j,k,space;
	printf("enter your limit:");
	scanf("%d",&limit);
	space=limit;
	for(i=1; i<=limit; i++){
		for(k=space; k>0; k--) {
			printf(" ");
		}
		for(j=1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
		space--;
	}
}
