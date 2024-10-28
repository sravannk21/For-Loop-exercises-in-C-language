#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int limit,i,j,space,k,num=1;
	printf("enter your limit:");
	scanf("%d",&limit);
	space=limit+4;
	for(i=1; i<=limit; i++){
		for(j=space; j>0; j--) {
			printf(" ");
		}
		for(k=1; k<=i; k++) {
			printf("%d ",num);
		}
		space--;
		num++;
		printf("\n");
	}
}
