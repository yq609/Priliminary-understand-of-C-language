#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int weight = 0, high = 0;
	scanf("%d %d", &weight, &high);

	//calculate weight/(high/100)/(high/100)
	double bim = weight / (high / 100.0) / (high / 100.0);

	//思考如果100.0->100会发生什么

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
	printf("%.2f\n",c);//可以发现想要结果中带有小数除数与被除数中必须至少有一方带有小数，否则结果直接取整数部分

	//此处的170/100=1
	float d = 70 / (170 / 100) / (170 / 100);
	printf("%.2f\n", d);
	//此处的170/100.0=1.7
	float f = 70 / (170 / 100.0) / (170 / 100.0);
	printf("%.2f\n", f);


	return 0;
}

