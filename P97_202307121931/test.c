#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main1()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 12; i++)
	{
		arr[i] = 0; // debug死循环
		printf("hehe\n");
	}
	return 0;
}




// 检查大小端
//百度2015年系统工程师笔试题：
//请简述大端字节序和小端字节序的
// 概念，设计一个小程序
//来判断当前机器的字节序。（10分）

int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
//代码2
int check_sys2()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}







