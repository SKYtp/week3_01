#include<stdio.h>
int main() {
	int a, b, c, d, e, f, g, h, i, j;
	float avg;
	printf("Enter height 10 people : ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	printf("\n Hight of 10 people is %d ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%d", a, b, c, d, e, f, g, h, i, j);
	avg = (a + b + c + d + e + f + g + h + i + j) / 10;
	printf("\n---------------------------------------------------");
	printf("\nAverage of 10 people is %.2f", avg);
	return 0;
}