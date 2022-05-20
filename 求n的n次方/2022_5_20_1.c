#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float Power(int n, int k)
{
	if (k > 0)
	{//每次让k-1,直到k等于0返回1再与n相乘,返回完后得到结果
		return n * Power(n, k - 1);
	}
	else if (k == 0)
	{//k为1时返回1
		return 1.0;
	}
	else
	{//把负次方转换为正数,让第一个表达式计算完让1.0除后得到答案
		return (1.0 / Power(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;//k为次方
	scanf("%d,%d", &n, &k);
	printf("%lf",Power(n, k));
	return 0;
}