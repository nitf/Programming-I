#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if (!(a % 2 == 0)) {
		printf("aは偶数ではありません\n");
	}
	else {
		printf("aは偶数です\n");
	}
	return (0);
}