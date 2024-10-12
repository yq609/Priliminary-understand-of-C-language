#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int d;
	scanf("%d", &d);

	int a = d / 10000;//1~4位数字
	int b = (d % 10000) / 100;//5~6位数字
	int c = d % 100;//7~8位数字

	printf("%d %d %d", a, b, c);
	//打印出一串数字的各个位数，利用除数省去余数和余数来实现

	return 0;
}