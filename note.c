#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("input a number : ");
	scanf("%d", &a);
	printf("input a number : ");
	scanf("%d", &b);

	int sum; 
	sum = a + b;
	
	printf("the sum is %d", sum);

	return 0;
}