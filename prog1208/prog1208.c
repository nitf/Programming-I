#include <stdio.h>

int main(void) {
	int day;
	int data[] = {"月", "火", "水", "木", "金", "土", "日"};
	
	printf("7月何日ですか？\n");
	printf("日にち=");
	scanf("%d", &day);
	
	if (day <= 7) {
		printf("7月%d日は%s曜日です\n", day, data[day - 1]);
	}
	else if (day >= 8 && day <= 14) {
		printf("7月%d日は%s曜日です\n", day, data[day - 7]);
	}
	else if (day >= 15 && day <= 21) {
		printf("7月%d日は%s曜日です\n", day, data[day - (7 * 2) - 1]);
	}
	else if (day >= 22 && day <= 28) {
		printf("7月%d日は%s曜日です\n", day, data [day - (7 * 3) - 1]);
	}
	else {
		printf("7月%d日は%s曜日です\n", day, data [day - (7 * 4) - 1]);
	}
	return (0);
}