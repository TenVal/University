
#include <stdio.h>

int main()
{
	int i, j, sum, dif, division, mult;
	scanf("%d", &i);
	scanf("%d", &j);
	sum = i + j;
	dif = i - j;
	mult = i * j;
	division = i / j;
	printf("%d %d", i, j);
	printf("%d", sum);
	printf("%d", dif);
	printf("%d", mult);
	printf("%d", division);
	return 0;
}