#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, sum, dif, division;
	scanf("%d%d", &i,&j);
	sum = i + j;
	dif = i - j;
	division = i / j;
	printf("%d %d", i, j);
	printf("%d", sum);
	printf("%d", dif);
	printf("%d", division);
	return 0;
}