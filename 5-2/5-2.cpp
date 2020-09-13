#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num[100], x, y, max, min, n;
	float av;
	printf("Enter n :");
	scanf("%d", &n);
	if (n > 0) {
		for (x = 0; x < n; x++) {
			x = x + 1;
			printf("#%d:", x);
			x = x - 1;
			scanf("%d", &num[x]);
			if (num[x] < 0) { printf("error\n"); }
		}
		min = num[0];
		for (y = 0; y < n; y++) {
			if (min > num[y]) {
				min = num[y];
			}
			if (max < num[y]) {
				max = num[y];
			}
		}
		if (max <= 0 && min >= 0 && av >= 0) {
			printf("maximum score = %d\n", max);
			printf("minimum score = %d\n", min);
			for (x = 0; x < n; x++)
			{
				av = av + num[x];
			}
			printf("mean score  = %f ", av / n);
		}
		else printf("\n\n\n			error");
	}
	else printf("error");
	return 0;
}
