#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int d;
	scanf("%d", &d);

	int a = d / 10000;//1~4λ����
	int b = (d % 10000) / 100;//5~6λ����
	int c = d % 100;//7~8λ����

	printf("%d %d %d", a, b, c);
	//��ӡ��һ�����ֵĸ���λ�������ó���ʡȥ������������ʵ��

	return 0;
}