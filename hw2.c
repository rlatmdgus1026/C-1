#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	double num1, num2;
	printf("Please enter kilometers:");
	scanf_s("%1f", &num1);
	num2 = num1 / 1.609;
	printf("%.1f km is equal to %.1f miles", num1, num2);
}