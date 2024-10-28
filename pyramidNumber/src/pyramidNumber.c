#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,j,k=1,l;
	printf("enter your limit:");
	scanf("%d",&limit);
	int space=limit;
	for(i=1; i<=limit; i++) {
		for(l=space; l>0; l--) {
			printf(" ");
		}
		for(j=1; j<=i; j++) {
			printf("%d ",k++);
		}
		printf("\n");
		space--;
	}
}
