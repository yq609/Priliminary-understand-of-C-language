#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ȡ��������е��������Ҫ������ѭ�����
//�����ĸ��������м��ÿո������������ֵ
int main()
{
	int max, n;
	int i = 1;

	//�����һ���������������ֵ
	scanf("%d", &max);


	while (i < 4)
	{
		//Ҫ�˽�scanf�Ķ�ȡԭ���ÿո���������������ݣ����ÿ��scanf�Ķ�ȡ�����ڶ����ո��ʱֹͣ
		scanf("%d", &n);
		//���֮������������д��ڼ�������ֵ���滻֮
		if (n > max)
			max = n;
		i++;
	}
	
	printf("%d", max);
	return 0;
}