#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//取多个整数中的最大数，要求运用循环语句
//输入四个整数，中间用空格隔开，输出最大值
int main()
{
	int max, n;
	int i = 1;

	//假设第一个输入数据是最大值
	scanf("%d", &max);


	while (i < 4)
	{
		//要了解scanf的读取原理，用空格键隔开了输入数据，因此每个scanf的读取都会在读到空格键时停止
		scanf("%d", &n);
		//如果之后的输入数据有大于假设的最大值，替换之
		if (n > max)
			max = n;
		i++;
	}
	
	printf("%d", max);
	return 0;
}