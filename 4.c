#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, temp, digit=0, rev=0;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		digit++;
		temp/=10;
	}
	temp=num;
	while(temp!=0){
		rev=rev+(temp%10)*pow(10,digit-1);
		temp/=10;
		digit--;
	}
	if(rev==num) printf("This number is a palindrome.");
	else printf("This number is not a palindrome.");
	return 0;
}
