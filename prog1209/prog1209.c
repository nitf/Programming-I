#include <stdio.h>

int main(void)
{
	int month;
	int day;
	
	printf("誕生日を入力してください\n");
	printf("月=");
	scanf("%d", &month);
	
	printf("日=");
	scanf("%d", &day);
	
	if ((month == 3) && (day >= 21) || (month == 4) && (day <= 19)) {
		printf("あなたはおひつじ座です\n");
	}
	else if ((month == 4) && (day >= 20) || (month == 5) && (day <= 20)) {
		printf("あなたはおうし座です\n");
	}
	else if ((month == 5) && (day >= 21) || (month == 6) && (day <= 21)) {
		printf("あなたはふたご座です\n");
	}
	else if ((month == 6) && (day >= 22) || (month == 7) && (day <= 22)) {
		printf("あなたはかに座です\n");
	}
	else if ((month == 7) && (day >= 23) || (month == 8) && (day <= 22)) {
		printf("あなたはしし座です\n");
	}
	else if ((month == 8) && (day >= 23) || (month == 9) && (day <= 22)) {
		printf("あなたはおとめ座です\n");
	}
	else if ((month == 9) && (day >= 23) || (month == 10) && (day <= 23)) {
		printf("あなたはてんびん座です\n");
	}
	else if ((month == 10) && (day >= 24) || (month == 11) && (day <= 21)) {
		printf("あなたはさそり座です\n");
	}
	else if ((month == 11) && (day >= 22) || (month == 12) && (day <= 21)) {
		printf("あなたはいて座です\n");
	}
	else if ((month == 12) && (day >= 22) || (month == 1) && (day <= 19)) {
		printf("あなたはやぎ座です\n");
	}
	else if ((month == 1) && (day >= 20) || (month == 2) && (day <= 18)) {
		printf("あなたはみずがめ座です\n");
	}
	else if ((month == 2) && (day >= 19) || (month == 3) && (day <= 20)) {
		printf("あなたはうお座です\n");
	}
	return (0);
}