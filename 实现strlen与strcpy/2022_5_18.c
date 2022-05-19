#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* lef)
{//模拟实现strlen
	int sum=0;//计数
	assert(lef != NULL);//防止lef为空指针
	while (*lef++)
	{
		sum++;
	}
	return sum;
}
char* my_strcpy(char* lef, const char* rig)//加入const让rig的直无法改变
{//模拟实现strcpy
	char* ret = lef;//先把lef保存下来
	//assert为断言,防止lef与rig为空指针
	assert(lef != NULL);
	assert(rig != NULL);
	while (*lef++ = *rig++)
	{
		;//lef会一直加加直到'\0'
	}
	return ret;//把改变后的lef返回
}
int main()
{
	char lef[] = "yes";
	char rig[] = "no";
	my_strlen(lef);
	printf("%d", my_strlen(lef));
	my_strcpy(lef, rig);
	printf("%s", my_strcpy(lef, rig));
	return 0;
}