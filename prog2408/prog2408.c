#include <stdio.h>

int main(void)
{
	int age;
	printf("年齢=");
	scanf("%d", &age);
	
	if (age >= 7 && age <= 12) {
		printf("小学生です\n");
	}
	else {
		printf("小学生ではありません\n");
	}
	return (0);
}