#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int a;
	int c;
	printf("Enter number : ");
	scanf("%d", &num);
	a = num / 10;
	c = abs(num - (a * 10));
	if (c == 2 || c == 4 || c == 6 || c == 8 || c == 0) { printf("Even number"); }
	else printf("Odd number");
	return 0;
}