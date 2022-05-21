#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* aa)
{//计算字符串
	if (*aa != '\0')
	{
		return 1 + my_strlen(aa + 1);
	}
	else
	{
		return 0;
	}
}
char* Reverse_order(char* aa)
{//逆序字符串
	int ret = my_strlen(aa) - 1;//计算出字符串
	char sto;//存储字符用来转换
	sto = aa[0];//让aa先保存到sto
	aa[0] = aa[ret];//把字符串最后的字符赋给第一个字符
	aa[ret] = '\0';//把'\0'赋给字符串最后的字符,与下面的表达式联动
	if (my_strlen(aa + 1) > 1)//每次计算第一个字符与最后一个字符中间的元素个数
	{
		Reverse_order(aa + 1);//首元素地址加一
	}
	aa[ret] = sto;
	return aa;
}
int main()
{
	char aa[100];
	printf("请输入==");
	scanf("%s", aa);
	printf("逆序前==%s\n", aa);
	printf("逆序后==%s", Reverse_order(aa));
	return 0;
}