#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//�ṩһ�����ķֶζ�ȡ��λ�����İ취
	int a, b, c;
	scanf("%4d%2d%2d", &a, &b, &c);
	printf("%d %d %d", a,b,c);

	//�ṩһ���������Ʋ�0����ķ���
	//��֪����������ʽ�������������硰01��ʱֻ�������1��
	int d = 1, f = 1;
	printf("%02d %02d", d, f);
	//%02d�������λ��������λ��0��%2d���������λ��������λ�򲹿ո�

	return 0;
}