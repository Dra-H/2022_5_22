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
	scanf("%d", &a);//斐波那契就是1  1  2  3  5,第一位加上第二位.
	Fibonacci(a);//求第六位是不是8
	printf("%d", Fibonacci(a));
	return 0;
}