#include"statement.h"
int Fibonacci(int a)
{
	if (a <= 2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(a - 2) + Fibonacci(a - 1);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);//쳲���������1  1  2  3  5,��һλ���ϵڶ�λ.
	Fibonacci(a);//�����λ�ǲ���8
	printf("%d", Fibonacci(a));
	return 0;
}