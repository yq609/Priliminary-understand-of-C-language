#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//˼��������n�Ľ׳ˣ�Ҫ������ѭ�����
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

//˼��������1��+2��+----+n�����ڼ���n�Ľ׳˵Ļ����Ͻ������ĸ���
int main()
{
	int rei = 1;
	int i, n;
	scanf("%d", &n);
	int add = 0;//addΪ�׳˵ĺ�

	//��1��ʼѭ������n�Ľ׳�
	for (i = 1; i <= n; i++)
	{
		rei = rei * i;//reiΪ�׳�
		//������Ҫ������⣬rei��ֵһֱ�Ǳ����ģ�Ҳ����ÿ�ζ���i+1�����֮ǰ�Ľ׳ˣ�Ҳ����i+1�Ľ׳�

		//���������n�Ľ׳˵����
		add = add + rei;
	}

	printf("%d", add);
	return 0;
}



