#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//define���峣����ʶ��
#define T 3.1415926

int main() 
{
    //double���͡�=�����ǡ�0.0������ʽ
    double r = 0.0;
    //double�������������ʽ�ǡ�%lf��
    scanf("%lf", &r);
    double v = 4 * T * r * r * r / 3;
    //����nλС�����double���͵ĸ�ʽ�ǡ�%.nlf��
    printf("%.3lf", v);


    return 0;
}