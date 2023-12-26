#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	printf("Please enter the values of A, B and C:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>=b&&a>=c) printf("The biggest number is %d",a);
	else if(b>=a&&b>=c) printf("The biggest number is %d",b);
	else printf("The biggest number is %d",c);
	return 0;
}
