
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, sum, dif;
	int i, j, sum, dif, division, mult;
	scanf("%d%d", &i,&j);
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