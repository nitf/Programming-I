#include <stdio.h>

int main(void)
{
	int n, i;
	
	printf("長さ=");
	scanf("%d", &n); // 整数を入力させる
	
	// n回回す
	for (i = 1; i <= n; i++) {
		// iが偶数なら*、奇数なら+を出力
		if (i % 2 == 0) {
			printf("*");
		}
		else {
			printf("+");
		}
	}
	return (0);
}