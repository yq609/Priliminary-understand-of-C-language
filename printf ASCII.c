#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = {73,32,99,97,110,111};
	//����һ�����飬�ǵ�arr����Ҫ����[]
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��������Ĵ�С������˵������Ԫ�صĸ���
	int i = 0;
	while (i < sz)
	//˼��Ϊʲôi<sz������i<=sz����Ϊ�����е��±��0��ʼ
	{
		printf("%c", arr[i]);
		//��ӡ���飬��ס%cΪ��ӡ�ַ�
		i++;
	}
	return 0;
}