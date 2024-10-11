#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");

	for (i = 1; i <= 10;i++)
		printf("%d ", i);
	printf("\n");

	int a = 1;
	do
	{
		printf("%d ", a);
		a++;
	} while (a <= 10);

	return 0;
}
