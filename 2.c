#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, fact=1;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	while(num!=0){
		fact=fact*num;
		num--;
	}
	printf("Factorial of number is %d",fact);
	return 0;
}
