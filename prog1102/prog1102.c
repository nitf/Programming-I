#include <stdio.h>

int main(void)
{
	int i;
	
	printf("整数を入力してください: ");
	scanf("%d", &i);
	
	if (i == 0) {
		printf("%dは0です\n");
	}
	else {
		printf("%dは0ではありません\n");
	}
	
	return (0);
}