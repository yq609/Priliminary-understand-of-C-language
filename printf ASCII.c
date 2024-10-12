#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = {73,32,99,97,110,111};
	//创建一个数组，记得arr后面要加上[]
	int sz = sizeof(arr) / sizeof(arr[0]);
	//计算数组的大小，或者说数组中元素的个数
	int i = 0;
	while (i < sz)
	//思考为什么i<sz而不是i<=sz？因为数组中的下标从0开始
	{
		printf("%c", arr[i]);
		//打印数组，记住%c为打印字符
		i++;
	}
	return 0;
}