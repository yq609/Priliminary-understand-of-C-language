#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int weight = 0, high = 0;
	scanf("%d %d", &weight, &high);

	//calculate weight/(high/100)/(high/100)
	double bim = weight / (high / 100.0) / (high / 100.0);

	//˼�����100.0->100�ᷢ��ʲô

	printf("%.2lf", bim);

	return 0;
}

int main()
{
	int a = 3 / 2;
	printf("%d\n",a);
	float b = 3 / 2;
	printf("%.2f\n",b);
	float c = 3 / 2.0;
	printf("%.2f\n",c);//���Է�����Ҫ����д���С�������뱻�����б���������һ������С����������ֱ��ȡ��������

	//�˴���170/100=1
	float d = 70 / (170 / 100) / (170 / 100);
	printf("%.2f\n", d);
	//�˴���170/100.0=1.7
	float f = 70 / (170 / 100.0) / (170 / 100.0);
	printf("%.2f\n", f);


	return 0;
}

