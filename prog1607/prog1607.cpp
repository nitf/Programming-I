#include <stdio.h>

int main(void)
{
	int i;
	
	printf("数値(3桁)=");
	scanf("%d", &i);
	
	printf("100の位=%d\n", i / 100);
	
	printf("10の位=%d\n", (i % 100) / 10);
	
	printf("1の位=%d\n", (i % 100) % 10);
	
	return (0);
}