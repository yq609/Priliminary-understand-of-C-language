#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//提供一个简洁的分段读取多位整数的办法
	int a, b, c;
	scanf("%4d%2d%2d", &a, &b, &c);
	printf("%d %d %d", a,b,c);

	//提供一个简介的限制补0输出的方法
	//须知上面那种形式的输出，在输出如“01”时只会输出“1”
	int d = 1, f = 1;
	printf("%02d %02d", d, f);
	//%02d即输出两位，不足两位则补0；%2d则是输出两位，不足两位则补空格

	return 0;
}