#include <stdio.h>

int main(void)
{
	float i[2];
	double ans;
		
	printf("数値1=");
	scanf("%f", &i[0]);
	
	printf("数値2=");
	scanf("%f", &i[1]);
	
	ans = (i[0] + i[1]) / 2;
	
	printf("%.1fと%.1fの平均は%.1fです\n", i[0], i[1], ans);
	
	return (0);
}