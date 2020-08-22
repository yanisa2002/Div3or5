#include<stdio.h>

int main() {
	int n;
	printf("Input number : ");
	scanf_s("%f", &n);
	if (n % 5 == 0 || n % 3 == 0) printf("It can be divided by 3 or 5");
	else printf("It can't be divided by 3 or 5");
}