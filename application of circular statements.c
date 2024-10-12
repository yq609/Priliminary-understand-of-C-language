#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//思考，计算n的阶乘，要求运用循环语句
	int rei = 1;
	int i, n;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{

		rei = rei * i;
	}

	printf("%d", rei);
	return 0;
}

//思考，计算1！+2！+----+n！，在计算n的阶乘的基础上进行语句的改造
int main()
{
	int rei = 1;
	int i, n;
	scanf("%d", &n);
	int add = 0;//add为阶乘的和

	//从1开始循环计算n的阶乘
	for (i = 1; i <= n; i++)
	{
		rei = rei * i;//rei为阶乘
		//在这里要进行理解，rei的值一直是保留的，也就是每次都是i+1后乘上之前的阶乘，也就是i+1的阶乘

		//在这里进行n的阶乘的相加
		add = add + rei;
	}

	printf("%d", add);
	return 0;
}



