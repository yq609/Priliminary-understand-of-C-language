#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//define定义常量标识符
#define T 3.1415926

int main() 
{
    //double类型“=”后是“0.0”的形式
    double r = 0.0;
    //double的输入与输出格式是“%lf”
    scanf("%lf", &r);
    double v = 4 * T * r * r * r / 3;
    //保留n位小数输出double类型的格式是“%.nlf”
    printf("%.3lf", v);


    return 0;
}