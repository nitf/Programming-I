#include <stdio.h>

int main(void)
{
	float n[2];
	float average;
	
	n[0] = 12.3;
	n[1] = 23.4;
	
	average = (n[0] + n[1]) / 2;
	printf("%.2fと%.2fの平均は%.1fです\n", n[0], n[1], average);
	
	return (0);
}