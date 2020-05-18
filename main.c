#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, sum, dif, mult;
	scanf("%d%d", &i,&j);
	sum = i + j;
	dif = i - j;
	mult = i * j;
	printf("%d %d", i, j);
	printf("%d", sum);
	printf("%d", dif);
	printf("%d", mult);
	return 0;
}