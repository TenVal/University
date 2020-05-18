#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i, j, sum, dif;
	scanf("%d%d", &i,&j);
	sum = i + j;
	dif = i - j;
	printf("%d %d", i, j);
	printf("%d", sum);
	printf("%d", dif);
	return 0;
}